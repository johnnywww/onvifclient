// SetSoapSecurityDigestImpl.cpp: implementation of the CSetSoapSecurityDigestImpl class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "SetSoapSecurityDigestImpl.h"
#include <memory>
#include "iCalculateDigest.h"
#include "FactoryImpl.h"
#include "appTools.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <ctype.h>
#include "appCommon.h"
#include "SoapUtils.h"

CSetSoapSecurityDigestImpl::CSetSoapSecurityDigestImpl()
{

}

CSetSoapSecurityDigestImpl::~CSetSoapSecurityDigestImpl()
{

}

int CSetSoapSecurityDigestImpl::setSecurity(struct soap* psoap, CBaseSoapSecurityInfo* securityInfo) 
{
	if (NULL == psoap) {
		return RET_CODE_ERROR_NULL_OBJECT;
	}
	if (NULL == securityInfo) {
		return RET_CODE_ERROR_NULL_OBJECT;
	}
	struct SOAP_ENV__Header* header = psoap->header;
	if (NULL == header) {
		return RET_CODE_ERROR_NULL_OBJECT;
	}

	header->wsse__Security = (struct _wsse__Security *)CSoapUtils::getInstance().my_soap_malloc(psoap, sizeof(struct _wsse__Security));	
	header->wsse__Security->UsernameToken = (struct _wsse__UsernameToken *)CSoapUtils::getInstance().my_soap_malloc(psoap, sizeof(struct _wsse__UsernameToken));


//	header->wsse__Security->UsernameToken->Nonce = soap_strdup(psoap, "3c8g874lw1LQeC3UdoUZzg=="); //◊¢“‚’‚¿Ô

	char nounce[SOAP_SMD_SHA1_SIZE + 1] = {0};
	CSoapUtils::getInstance().calc_nonce(nounce, SOAP_SMD_SHA1_SIZE);
	char nounceBase64[KB_SIZE] = {0};
	std::auto_ptr<IEncodeBase64> apEncodeBase64(CFactoryImpl::getInstance().createEncodeBase64());
	int result = apEncodeBase64->encode((char*)nounce, strlen(nounce), psoap, (char*)nounceBase64);
	if (!CAppTools::getInstance().isRetSuccess(result)) {
		return result;
	}
	header->wsse__Security->UsernameToken->Nonce = soap_strdup(psoap, nounceBase64);

	
	header->wsse__Security->UsernameToken->wsu__Created = CSoapUtils::getInstance().createSoapDateTimeStr(psoap);
//	header->wsse__Security->UsernameToken->wsu__Created = soap_strdup(psoap, "2015-01-04T15:17:30Z");
	header->wsse__Security->UsernameToken->Username = soap_strdup(psoap, securityInfo->getUserName().c_str());
	header->wsse__Security->UsernameToken->Password = (struct _wsse__Password *)CSoapUtils::getInstance().my_soap_malloc(psoap, sizeof(struct _wsse__Password));
	header->wsse__Security->UsernameToken->Password->Type = soap_strdup(psoap, SOAP_PASS_DIGEST_URI);
	header->wsse__Security->UsernameToken->Password->__item =  genrateDigest(psoap, (unsigned char*)securityInfo->getPassword().c_str(), nounce, header->wsse__Security->UsernameToken->wsu__Created);
	if (NULL == header->wsse__Security->UsernameToken->Password->__item) {
		return RET_CODE_ERROR_INVALID_VALUE;
	}
	return RET_CODE_SUCCESS;
}

char* CSetSoapSecurityDigestImpl::genrateDigest(struct soap* psoap, unsigned char *pwd, char *nonc, char *time)
{
    unsigned char dist[KB_SIZE] = {0};
	std::auto_ptr<ICalculateDigest> ap(CFactoryImpl::getInstance().createCalculateDigest());
    int result = ap->calc((char*)nonc, time, (char*)pwd, (char*)dist);
	if (!CAppTools::getInstance().isRetSuccess(result))
		return NULL;
    unsigned char bout[KB_SIZE] = {0};
    std::auto_ptr<IEncodeBase64> apEncodeBase64(CFactoryImpl::getInstance().createEncodeBase64());
	apEncodeBase64->encode((char*)dist, strlen((char*)dist),  psoap, (char*)bout);
   return soap_strdup(psoap, (char*)bout);
}