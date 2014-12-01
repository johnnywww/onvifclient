#include "stdafx.h"
#include "GetDeviceInformationImpl.h"
#include "appCommon.h"
#include "StringMapRetInfo.h"
#include "SoapUtils.h"

CGetDeviceInformationImpl::CGetDeviceInformationImpl()
{
}


CGetDeviceInformationImpl::~CGetDeviceInformationImpl()
{
}

CBaseRetInfo* CGetDeviceInformationImpl::getInfo(std::string serviceAddress) {
	CStringMapRetInfo* result = new CStringMapRetInfo();
	result->setRetCode(RET_CODE_ERROR_NOT_SUPPORT);
	if (serviceAddress.length() < 1) {
		result->setRetCode(RET_CODE_ERROR_INVALID_VALUE);
		result->setMessage("no service address");
		return result;
	}
	struct soap* soap = CSoapUtils::getInstance().newSoap();
	if (NULL == soap) {
		result->setRetCode(RET_CODE_ERROR_NULL_OBJECT);
		result->setMessage("new soap error");
		return result;
	}
	struct _tds__GetDeviceInformation tds__GetDeviceInformation;
	tds__GetDeviceInformation.dummy = 0;
	struct _tds__GetDeviceInformationResponse tds__GetDeviceInformationResponse;
	if (SOAP_OK != soap_call___tds__GetDeviceInformation(soap, serviceAddress.c_str(), NULL, &tds__GetDeviceInformation, &tds__GetDeviceInformationResponse)) {
		result->setRetCode(RET_CODE_ERROR_RECV);
		result->setMessage(*soap_faultstring(soap));
		CSoapUtils::getInstance().deleteSoap(soap);
		return result;
	}
	result->addInfo("FirmwareVersion", tds__GetDeviceInformationResponse.FirmwareVersion);
	result->addInfo("HardwareId", tds__GetDeviceInformationResponse.HardwareId);
	result->addInfo("Manufacturer", tds__GetDeviceInformationResponse.Manufacturer);
	result->addInfo("Model", tds__GetDeviceInformationResponse.Model);
	result->addInfo("SerialNumber", tds__GetDeviceInformationResponse.SerialNumber);
	result->setRetCode(RET_CODE_SUCCESS);
	CSoapUtils::getInstance().deleteSoap(soap);
	return result;
}