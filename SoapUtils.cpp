#include "stdafx.h"
#include "SoapUtils.h"


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
	psoap->recv_timeout = 6;
	return psoap;
}

struct soap* CSoapUtils::newProbeSoap(wsdd__ProbeType *req_)
{
	struct  soap* psoap = newSoap();
	if (NULL == psoap)
		return NULL;
	if (0 == psoap->recv_timeout)
		psoap->recv_timeout = 6;
	struct SOAP_ENV__Header* header = static_cast<struct SOAP_ENV__Header*>(my_soap_malloc(psoap, sizeof(struct SOAP_ENV__Header)));

	soap_default_SOAP_ENV__Header(psoap, header);

	char guid_string[100] = { 0 };
	GUID guid;

	if (CoCreateGuid(&guid))
	{
		fprintf(stderr, "create guid error\n");
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
