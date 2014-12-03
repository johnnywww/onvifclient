#pragma once

#include "appCommon.h"
#include "soapH.h"
#include "BaseRetInfo.h"

class CSoapUtils
{
public:
	CSoapUtils();
	~CSoapUtils();
	OneInstance(CSoapUtils)
public:
	struct soap* newSoap();
	struct soap* newSoap(const char* userName, const char* password);
	struct soap* newSoapRetInfo(CBaseRetInfo* retInfo);
	struct soap* newProbeSoap(wsdd__ProbeType *req_, CBaseRetInfo* retInfo);
	void deleteSoap(struct soap* psoap);
	void* my_soap_malloc(struct soap* psoap, size_t n);
	void setSoapErrorInfo(const int retCode, struct soap* psoap, CBaseRetInfo* retInfo);
	void setRetInfoAndDeleteSoap(const int retCode, std::string msg, struct soap* psoap, CBaseRetInfo* retInfo);
	void setSoapErrorInfoAndDeleteSoap(const int retCode, struct soap* psoap, CBaseRetInfo* retInfo);
	void setSoapSuccessInfoAndDeleteSoap(struct soap* psoap, CBaseRetInfo* retInfo);
};

