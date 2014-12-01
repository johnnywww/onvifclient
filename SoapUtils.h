#pragma once

#include "appCommon.h"
#include "soapH.h"

class CSoapUtils
{
public:
	CSoapUtils();
	~CSoapUtils();
	OneInstance(CSoapUtils)
public:
	struct soap* newSoap();
	struct soap* newSoap(const char* userName, const char* password);
	struct soap* newProbeSoap(wsdd__ProbeType *req_);
	void deleteSoap(struct soap* psoap);
	void* my_soap_malloc(struct soap* psoap, size_t n);
};

