#include "stdafx.h"
#include "SoapUtils.h"
#include <memory>
#include "appTools.h"
#include "iSetSoapSecurity.h"
#include "FactoryImpl.h"

#define SOAP_RECV_TIMEOUT 10
#define SOAP_SEND_TIMEOUT 10
#define SOAP_CONNECT_TIMEOUT 10

CSoapUtils::CSoapUtils()
{
}


CSoapUtils::~CSoapUtils()
{
}

struct soap* CSoapUtils::newSoap(CBaseSoapSecurityInfo* securityInfo)
{
	struct soap* psoap = NULL;
	psoap = soap_new();
	if (NULL == psoap)
	{
		printf("soap new error\r\n");
		return NULL;
	}
	soap_set_namespaces(psoap, namespaces);
	psoap->recv_timeout = SOAP_RECV_TIMEOUT;
	psoap->send_timeout    = SOAP_SEND_TIMEOUT;
    psoap->connect_timeout = SOAP_CONNECT_TIMEOUT;
	struct SOAP_ENV__Header* header = static_cast<struct SOAP_ENV__Header*>(my_soap_malloc(psoap, sizeof(struct SOAP_ENV__Header)));
	
	soap_default_SOAP_ENV__Header(psoap, header);
	
	char guid_string[100] = { 0 };
	GUID guid;
	
	if (CoCreateGuid(&guid))
	{
		deleteSoap(psoap);
		printf("create guid error\r\n");
		return NULL;
	}
	sprintf(guid_string, "{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}", guid.Data1, guid.Data2, guid.Data3, guid.Data4[1], guid.Data4[0], guid.Data4[7], guid.Data4[6], guid.Data4[5], guid.Data4[4], guid.Data4[3], guid.Data4[2]);
	header->wsa__MessageID = static_cast<char*>(my_soap_malloc(psoap, 100));
	strcpy(header->wsa__MessageID, guid_string);
	psoap->header = header;
	if ((NULL != securityInfo) && (securityInfo->getUserName().length() > 0)){
		std::auto_ptr<ISetSoapSecurity> ap(CFactoryImpl::getInstance().createSetSoapSecurity());
		if (!CAppTools::getInstance().isRetSuccess(ap->setSecurity(psoap, securityInfo))) {
			deleteSoap(psoap);
			printf("set security error\r\n");
			return NULL;
		}
	}
	return psoap;
}


struct soap* CSoapUtils::newProbeSoap(wsdd__ProbeType *req_, CBaseSoapSecurityInfo* securityInfo, CBaseRetInfo* retInfo)
{
	struct  soap* psoap = newSoapRetInfo(securityInfo, retInfo);
	if (NULL == psoap)
		return NULL;
    struct SOAP_ENV__Header* header = psoap->header;
	header->wsa__To = "urn:schemas-xmlsoap-org:ws:2005:04:discovery";
	header->wsa__Action = "http://schemas.xmlsoap.org/ws/2005/04/discovery/Probe";

	wsdd__ScopesType* sScope_ = static_cast<wsdd__ScopesType*>(my_soap_malloc(psoap, sizeof(wsdd__ScopesType)));
	soap_default_wsdd__ScopesType(psoap, sScope_);
	sScope_->__item = "";
	soap_default_wsdd__ProbeType(psoap, req_);
	req_->Scopes = sScope_;
	req_->Types = ""; //"dn:NetworkVideoTransmitter";
	return psoap;
}

void* CSoapUtils::my_soap_malloc(struct soap* psoap, size_t n) {
	void* result = (void*)soap_malloc(psoap, n);
	memset(result, 0, n);
	return result;
}

void CSoapUtils::deleteSoap(struct soap* psoap)
{
	if (NULL == psoap)
		return;
	soap_destroy(psoap); // remove deserialized class instances (C++ only)
	soap_end(psoap); // clean up and remove deserialized data
	soap_done(psoap); // detach context (last use and no longer in scope)	
	free(psoap);
}

void CSoapUtils::setSoapErrorInfo(const int retCode, struct soap* psoap, CBaseRetInfo* retInfo)
{
	if (NULL == retInfo)
		return;
	retInfo->setRetCode(retCode);
	if (psoap->error) {
		char st[255];
		memset(st, 0, 255);
		soap_sprint_fault(psoap, st, 255);
		retInfo->setMessage(st);
	}
}

void CSoapUtils::setSoapErrorInfoAndDeleteSoap(const int retCode, struct soap* psoap, CBaseRetInfo* retInfo)
{
	setSoapErrorInfo(retCode, psoap, retInfo);
	deleteSoap(psoap);
}

struct soap* CSoapUtils::newSoapRetInfo(CBaseSoapSecurityInfo* securityInfo, CBaseRetInfo* retInfo)
{
	struct soap* result = newSoap(securityInfo);
	if (NULL == result) {
		retInfo->setRetCode(RET_CODE_ERROR_NULL_OBJECT);
		retInfo->setMessage("new soap error");
	}	
	return result;
}

void CSoapUtils::setRetInfoAndDeleteSoap(const int retCode, std::string msg, struct soap* psoap, CBaseRetInfo* retInfo)
{
	retInfo->setRetCode(retCode);
	retInfo->setMessage(msg);
	deleteSoap(psoap);
}

void CSoapUtils::setSoapSuccessInfoAndDeleteSoap(struct soap* psoap, CBaseRetInfo* retInfo)
{
	retInfo->setRetCode(RET_CODE_SUCCESS);
	deleteSoap(psoap);
}

void CSoapUtils::calc_nonce(char* nonce, int len)
{
	int i;  
    time_t r = time(NULL);  
    memcpy(nonce, &r, 4);  
    for (i = 4; i < len; i += 4)  
    {   
        r = soap_random;  
        memcpy(nonce + i, &r, 4);  
    }  
}

char* CSoapUtils::createSoapDateTimeStr(struct soap* psoap)
{
	time_t now = time(NULL);  
    return soap_strdup(psoap, soap_dateTime2s(psoap, now));  
}