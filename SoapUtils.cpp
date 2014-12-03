#include "stdafx.h"
#include "SoapUtils.h"

#define SOAP_RECV_TIMEOUT 5

CSoapUtils::CSoapUtils()
{
}


CSoapUtils::~CSoapUtils()
{
}

struct soap* CSoapUtils::newSoap()
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
	return psoap;
}

struct soap* CSoapUtils::newProbeSoap(wsdd__ProbeType *req_, CBaseRetInfo* retInfo)
{
	struct  soap* psoap = newSoapRetInfo(retInfo);
	if (NULL == psoap)
		return NULL;
	struct SOAP_ENV__Header* header = static_cast<struct SOAP_ENV__Header*>(my_soap_malloc(psoap, sizeof(struct SOAP_ENV__Header)));

	soap_default_SOAP_ENV__Header(psoap, header);

	char guid_string[100] = { 0 };
	GUID guid;

	if (CoCreateGuid(&guid))
	{
		setRetInfoAndDeleteSoap(RET_CODE_ERROR_INVALID_VALUE, "create guid error", psoap, retInfo);
		return NULL;
	}

	header->wsa__MessageID = guid_string;
	header->wsa__To = "urn:schemas-xmlsoap-org:ws:2005:04:discovery";
	header->wsa__Action = "http://schemas.xmlsoap.org/ws/2005/04/discovery/Probe";
	psoap->header = header;
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

struct soap* CSoapUtils::newSoapRetInfo(CBaseRetInfo* retInfo)
{
	struct soap* result = newSoap();
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
