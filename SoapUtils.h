#pragma once

#include "appCommon.h"
#include "soapH.h"
#include "BaseRetInfo.h"
#include "BaseSoapSecurityInfo.h"

class CSoapUtils
{
public:
	CSoapUtils();
	~CSoapUtils();
	OneInstance(CSoapUtils)
public:
	struct soap* newSoap(CBaseSoapSecurityInfo* securityInfo);
	struct soap* newSoapRetInfo(CBaseSoapSecurityInfo* securityInfo, CBaseRetInfo* retInfo);
	struct soap* newProbeSoap(wsdd__ProbeType *req_, CBaseSoapSecurityInfo* securityInfo, CBaseRetInfo* retInfo);
	void deleteSoap(struct soap* psoap);
	void* my_soap_malloc(struct soap* psoap, size_t n);
	void setSoapErrorInfo(const int retCode, struct soap* psoap, CBaseRetInfo* retInfo);
	void setRetInfoAndDeleteSoap(const int retCode, std::string msg, struct soap* psoap, CBaseRetInfo* retInfo);
	void setSoapErrorInfoAndDeleteSoap(const int retCode, struct soap* psoap, CBaseRetInfo* retInfo);
	void setSoapSuccessInfoAndDeleteSoap(struct soap* psoap, CBaseRetInfo* retInfo);
	void calc_nonce(char* nonce, int len);
	char* createSoapDateTimeStr(struct soap* psoap);
};

