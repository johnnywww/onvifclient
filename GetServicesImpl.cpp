// GetServicesImpl.cpp: implementation of the CGetServicesImpl class.
//
//////////////////////////////////////////////////////////////////////

#include "GetServicesImpl.h"
#include "StringMapRetInfo.h"
#include "appCommon.h"
#include "soapStub.h"
#include "SoapUtils.h"
#include "appTools.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CGetServicesImpl::CGetServicesImpl()
{

}

CGetServicesImpl::~CGetServicesImpl()
{

}

CBaseRetInfo* CGetServicesImpl::getInfo(std::string serviceAddress, CBaseSoapSecurityInfo* securityInfo)
{
	CStringMapRetInfo* result = new CStringMapRetInfo();
	result->setRetCode(RET_CODE_ERROR_NOT_SUPPORT);
	if (CAppTools::getInstance().getInvalidServiceAddressRetInfo(serviceAddress, result)) {
		return result;
	}
	struct soap* psoap = CSoapUtils::getInstance().newSoapRetInfo(securityInfo, result);
	if (NULL == psoap) {
		return result;
	}
	_tds__GetServices tds__GetService;
	_tds__GetServicesResponse tds__GetServicesResponse;
	int code = soap_call___tds__GetServices(psoap, serviceAddress.c_str(), NULL, &tds__GetService, &tds__GetServicesResponse);
	if (SOAP_OK != code) {
		CSoapUtils::getInstance().setSoapErrorInfoAndDeleteSoap(RET_CODE_ERROR_RECV, psoap, result);
		return result;
	}
	if (tds__GetServicesResponse.__sizeService > 0)  {
		for(int i = 0; i < tds__GetServicesResponse.__sizeService; i++) {
			tds__Service* service = tds__GetServicesResponse.Service[i];
			if ((NULL != service) && (NULL != service->Namespace) && (0 == strcmp(service->Namespace, SOAP_NAMESPACE_OF_trt))) {
				result->addInfo("media", service->XAddr);
			}
		}
	}
	CSoapUtils::getInstance().setSoapSuccessInfoAndDeleteSoap(psoap, result);
	return result;
}
