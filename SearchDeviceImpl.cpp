#include "stdafx.h"
#include "SearchDeviceImpl.h"
#include "appCommon.h"
#include "SearchDeviceRetInfo.h"
#include "appTools.h"
#include "SoapUtils.h"

CSearchDeviceImpl::CSearchDeviceImpl()
{
}


CSearchDeviceImpl::~CSearchDeviceImpl()
{
}

void CSearchDeviceImpl::detectDevice(struct soap* psoap, wsdd__ProbeType *req_, CBaseRetInfo* retInfo) {
	int result = soap_send___wsdd__Probe(psoap, SOAP_ENDPOINT_AUTOSEARCH, NULL, req_);
	if (SOAP_OK != result) {
		CSoapUtils::getInstance().setSoapErrorInfo(RET_CODE_ERROR_CONNECT, psoap, retInfo);
		return;
	}
	struct __wsdd__ProbeMatches resp;	
	bool addit = false;
	while (result == SOAP_OK)
	{
		memset(&resp, 0, sizeof(struct __wsdd__ProbeMatches));
		result = soap_recv___wsdd__ProbeMatches(psoap, &resp);
		if (result == SOAP_OK)
		{
			for (int i = 0; i < resp.wsdd__ProbeMatches->__sizeProbeMatch; i++)
			{
				struct wsdd__ProbeMatchType* probeMatch = &resp.wsdd__ProbeMatches->ProbeMatch[i];				
				CDevice* device = new CDevice();
				device->setEPAddress(probeMatch->wsa__EndpointReference.Address);
				device->setType(probeMatch->Types);
				device->setServiceAddress(CAppTools::getInstance().split(probeMatch->XAddrs, " "));
				device->setMetaVersion(CAppTools::getInstance().convertToStr(probeMatch->MetadataVersion));
				if (NULL != probeMatch->Scopes && NULL != probeMatch->Scopes->__item)
					device->setScopeTypes(probeMatch->Scopes->__item);
				(static_cast<CSearchDeviceRetInfo*>(retInfo))->addDevice(device);
				addit = true;
			}
		}
		else if (psoap->error)
		{
			CSoapUtils::getInstance().setSoapErrorInfo(RET_CODE_ERROR_CONNECT, psoap, retInfo);
			break;
		}

	}
	if (addit) {
		retInfo->setRetCode(RET_CODE_SUCCESS);
		retInfo->setMessage("");
	}
}

CBaseRetInfo* CSearchDeviceImpl::getDevices(CBaseSoapSecurityInfo* securityInfo)
{
	CSearchDeviceRetInfo* result = new CSearchDeviceRetInfo();
	result->setRetCode(RET_CODE_ERROR_UNKNOWN);
	wsdd__ProbeType wsdd_req;
	struct soap* psoap = CSoapUtils::getInstance().newProbeSoap(&wsdd_req, securityInfo, result);
	if (NULL == psoap) {
		return result;
	}
	detectDevice(psoap, &wsdd_req, result);
	CSoapUtils::getInstance().deleteSoap(psoap);
	return result;
}