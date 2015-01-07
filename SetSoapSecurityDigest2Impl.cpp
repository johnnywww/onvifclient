// SetSoapSecurityDigest2Impl.cpp: implementation of the CSetSoapSecurityDigest2Impl class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "SetSoapSecurityDigest2Impl.h"
#include <memory>
#include "appCommon.h"
#include "SoapUtils.h"
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

CSetSoapSecurityDigest2Impl::CSetSoapSecurityDigest2Impl()
{

}

CSetSoapSecurityDigest2Impl::~CSetSoapSecurityDigest2Impl()
{

}

int CSetSoapSecurityDigest2Impl::setSecurity(struct soap* psoap, CBaseSoapSecurityInfo* securityInfo) 
{
	if (NULL == psoap) {
		return RET_CODE_ERROR_NULL_OBJECT;
	}
	if (NULL == securityInfo) {
		return RET_CODE_ERROR_NULL_OBJECT;
	}
	return soap_wsse_add_UsernameTokenDigest(psoap, securityInfo->getUserName().c_str(), securityInfo->getPassword().c_str());
}

void CSetSoapSecurityDigest2Impl::calc_nonce(struct soap *soap, char nonce[SOAP_WSSE_NONCELEN])  
{  
	CSoapUtils::getInstance().calc_nonce(nonce, SOAP_WSSE_NONCELEN);
} 


int CSetSoapSecurityDigest2Impl::soap_wsse_add_UsernameTokenText(struct soap *soap, 
												  const char *username, const char *password)  
{   
    _wsse__Security *security = soap->header->wsse__Security;  
    /* allocate a UsernameToken if we don't have one already */  
    if (!security->UsernameToken)  
        security->UsernameToken = (_wsse__UsernameToken*)soap_malloc(soap, sizeof(_wsse__UsernameToken));  
    soap_default__wsse__UsernameToken(soap, security->UsernameToken);  
    /* populate the UsernameToken */  
/*    security->UsernameToken->wsu__Id = soap_strdup(soap, id);  */
    security->UsernameToken->Username = soap_strdup(soap, username);  
    /* allocate and populate the Password */  
    if (password)  
    {   
        security->UsernameToken->Password = (_wsse__Password*)soap_malloc(soap, sizeof(_wsse__Password));  
        soap_default__wsse__Password(soap, security->UsernameToken->Password);  
        security->UsernameToken->Password->__item = soap_strdup(soap, password);  
    }  
    return SOAP_OK;  
}  

int CSetSoapSecurityDigest2Impl::soap_wsse_add_UsernameTokenDigest(struct soap *psoap,   
    const char *username, const char *password)  
{   
	struct SOAP_ENV__Header* header = psoap->header;
	if (NULL == header) {
		return RET_CODE_ERROR_NULL_OBJECT;
	}
	header->wsse__Security = (struct _wsse__Security *)CSoapUtils::getInstance().my_soap_malloc(psoap, sizeof(struct _wsse__Security));	
	soap_default__wsse__Security(psoap, header->wsse__Security);  
    _wsse__Security *security = header->wsse__Security;
//    char *created = soap_strdup(psoap, "2015-01-04T15:17:30Z");  
	char *created = CSoapUtils::getInstance().createSoapDateTimeStr(psoap);  
    char HA[SOAP_SMD_SHA1_SIZE] = {0}, HABase64[29] = {0};  
    char nonce[SOAP_WSSE_NONCELEN] = {0};
	char *nonceBase64;  
    /* generate a nonce */  
//     calc_nonce(psoap, nonce);  
//     nonceBase64 = soap_s2base64(psoap, (unsigned char*)nonce, NULL, SOAP_WSSE_NONCELEN);  
	nonceBase64 = soap_strdup(psoap, "3c8g874lw1LQeC3UdoUZzg==");
	std::auto_ptr<IDecodeBase64> apDecodeBase64(CFactoryImpl::getInstance().createDecodeBase64());
	int result = apDecodeBase64->decode(nonceBase64, psoap, nonce, SOAP_WSSE_NONCELEN);	
	if (!CAppTools::getInstance().isRetSuccess(result))
		return result;
	std::auto_ptr<ICalculateDigest> ap(CFactoryImpl::getInstance().createCalculateDigest());
    result =  ap->calc(nonce, created, password, HA);
	if (!CAppTools::getInstance().isRetSuccess(result))
		return result;
	std::auto_ptr<IEncodeBase64> apEncodeBase64(CFactoryImpl::getInstance().createEncodeBase64());
	result = apEncodeBase64->encode(HA, psoap, HABase64,SOAP_SMD_SHA1_SIZE);
	if (!CAppTools::getInstance().isRetSuccess(result))
		return result;
    // soap_s2base64(psoap, (unsigned char*)HA, HABase64, SOAP_SMD_SHA1_SIZE);  
    /* populate the UsernameToken with digest */  
    soap_wsse_add_UsernameTokenText(psoap,username, HABase64);  
    /* populate the remainder of the password, nonce, and created */  
    security->UsernameToken->Password->Type = soap_strdup(psoap, SOAP_PASS_DIGEST_URI);  
    security->UsernameToken->Nonce = nonceBase64;  
    security->UsernameToken->wsu__Created = created;  
  
    return RET_CODE_SUCCESS;  
}  