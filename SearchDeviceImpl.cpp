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
		retInfo->setRetCode(RET_CODE_ERROR_CONNECT);
		if (psoap->error)
			retInfo->setMessage(*soap_faultstring(psoap));
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
			printf("Onvif Device detected *********************************************\r\n");
			for (int i = 0; i < resp.wsdd__ProbeMatches->__sizeProbeMatch; i++)
			{
				struct wsdd__ProbeMatchType* probeMatch = &resp.wsdd__ProbeMatches->ProbeMatch[i];
				printf("__sizeProbeMatch        : %d\r\n", resp.wsdd__ProbeMatches->__sizeProbeMatch);
				printf("wsa__EndpointReference       : %p\r\n", probeMatch->wsa__EndpointReference);
				CDevice* device = new CDevice();
				device->setEPAddress(probeMatch->wsa__EndpointReference.Address);
				device->setType(probeMatch->Types);
				device->setServiceAddress(probeMatch->XAddrs);
				device->setMetaVersion(CAppTools::getInstance().convertToStr(probeMatch->MetadataVersion));
				if (NULL != probeMatch->Scopes->__item)
					device->setScopeTypes(probeMatch->Scopes->__item);
				(static_cast<CSearchDeviceRetInfo*>(retInfo))->addDevice(device);
				addit = true;
				if (resp.wsdd__ProbeMatches->ProbeMatch->Scopes)
				{
					printf("Target Scopes Address   : %s\r\n", resp.wsdd__ProbeMatches->ProbeMatch->Scopes->__item);
				}
			}
			break;
		}
		else if (psoap->error)
		{
			retInfo->setRetCode(RET_CODE_ERROR_CONNECT);
			retInfo->setMessage(*soap_faultstring(psoap));
			result = psoap->error;
		}

	}
	if (addit) {
		retInfo->setRetCode(RET_CODE_SUCCESS);
		retInfo->setMessage("");
	}
}

CBaseRetInfo* CSearchDeviceImpl::getDevices()
{
	CSearchDeviceRetInfo* result = new CSearchDeviceRetInfo();
	result->setRetCode(RET_CODE_ERROR_UNKNOWN);
	wsdd__ProbeType wsdd_req;
	struct soap* psoap = CSoapUtils::getInstance().newProbeSoap(&wsdd_req);
	if (NULL == psoap) {
		result->setRetCode(RET_CODE_ERROR_NULL_OBJECT);
		result->setMessage(std::string("newsoap error"));
		return result;
	}
	detectDevice(psoap, &wsdd_req, result);
	CSoapUtils::getInstance().deleteSoap(psoap);
	return result;
}