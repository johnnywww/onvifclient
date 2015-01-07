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
	header->wsse__Security->UsernameToken->Nonce = (char*)CSoapUtils::getInstance().my_soap_malloc(psoap, 64);
	char nounce[SOAP_SMD_SHA1_SIZE] = {0};
	char nounceBase64[SOAP_SMD_SHA1_SIZE] = {0};
	CSoapUtils::getInstance().calc_nonce(nounce, SOAP_SMD_SHA1_SIZE);	
	std::auto_ptr<IEncodeBase64> apEncodeBase64(CFactoryImpl::getInstance().createEncodeBase64());
	apEncodeBase64->encode((char*)nounce, psoap, (char*)nounceBase64, SOAP_SMD_SHA1_SIZE);

	// strcpy(header->wsse__Security->UsernameToken->Nonce,"3c8g874lw1LQeC3UdoUZzg=="); //×¢ÒâÕâÀï
	
	header->wsse__Security->UsernameToken->wsu__Created = CSoapUtils::getInstance().createSoapDateTimeStr(psoap);

	header->wsse__Security->UsernameToken->Username = (char *)CSoapUtils::getInstance().my_soap_malloc(psoap, 64);	
	strcpy(header->wsse__Security->UsernameToken->Username, securityInfo->getUserName().c_str());
	header->wsse__Security->UsernameToken->Password = (struct _wsse__Password *)CSoapUtils::getInstance().my_soap_malloc(psoap, sizeof(struct _wsse__Password));
	header->wsse__Security->UsernameToken->Password->Type = (char*)CSoapUtils::getInstance().my_soap_malloc(psoap, 128);
	strcpy(header->wsse__Security->UsernameToken->Password->Type, SOAP_PASS_DIGEST_URI);
	header->wsse__Security->UsernameToken->Password->__item = (char*)CSoapUtils::getInstance().my_soap_malloc(psoap, 128);
	genrateDigest(psoap, (unsigned char*)header->wsse__Security->UsernameToken->Password->__item, (unsigned char*)securityInfo->getPassword().c_str(), nounce, header->wsse__Security->UsernameToken->wsu__Created);
	return RET_CODE_SUCCESS;
}

void CSetSoapSecurityDigestImpl::genrateDigest(struct soap* psoap, unsigned char *pwddigest_out, unsigned char *pwd, char *nonc, char *time)
{
    const unsigned char *tdist;
    unsigned char dist[KB_SIZE] = {0};
    unsigned char bout[KB_SIZE] = {0};
//    char tmp[1024] = {0};
//    strcpy(tmp, nonc);
//	std::auto_ptr<IDecodeBase64> apDecodeBase64(CFactoryImpl::getInstance().createDecodeBase64());
//    apDecodeBase64->decode(tmp, psoap, (char*)bout, KB_SIZE);
	std::auto_ptr<ICalculateDigest> ap(CFactoryImpl::getInstance().createCalculateDigest());
    int result =  ap->calc((char*)nonc, time, (char*)pwd, (char*)dist);
	if (!CAppTools::getInstance().isRetSuccess(result))
		return;
    tdist = dist;
    memset(bout, 0x0, KB_SIZE);
    std::auto_ptr<IEncodeBase64> apEncodeBase64(CFactoryImpl::getInstance().createEncodeBase64());
	apEncodeBase64->encode((char*)tdist, psoap, (char*)bout, SOAP_SMD_SHA1_SIZE);
    strcpy((char *)pwddigest_out,(const char*)bout);
}