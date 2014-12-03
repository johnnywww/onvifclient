#include "stdafx.h"
#include "GetDeviceInformationImpl.h"
#include "appCommon.h"
#include "StringMapRetInfo.h"
#include "SoapUtils.h"
#include "appTools.h"

CGetDeviceInformationImpl::CGetDeviceInformationImpl()
{
}


CGetDeviceInformationImpl::~CGetDeviceInformationImpl()
{
}

CBaseRetInfo* CGetDeviceInformationImpl::getInfo(std::string serviceAddress) {
	CStringMapRetInfo* result = new CStringMapRetInfo();
	result->setRetCode(RET_CODE_ERROR_NOT_SUPPORT);
	if (CAppTools::getInstance().getInvalidServiceAddressRetInfo(serviceAddress, result)) {
		return result;
	}
	struct soap* psoap = CSoapUtils::getInstance().newSoapRetInfo(result);
	if (NULL == psoap) {
		return result;
	}
	_tds__GetDeviceInformation tds__GetDeviceInformation;
	struct _tds__GetDeviceInformationResponse tds__GetDeviceInformationResponse;
	if (SOAP_OK != soap_call___tds__GetDeviceInformation(psoap, serviceAddress.c_str(), NULL, &tds__GetDeviceInformation, &tds__GetDeviceInformationResponse)) {
		CSoapUtils::getInstance().setSoapErrorInfoAndDeleteSoap(RET_CODE_ERROR_RECV, psoap, result);
		return result;
	}
	result->addInfo("FirmwareVersion", tds__GetDeviceInformationResponse.FirmwareVersion);
	result->addInfo("HardwareId", tds__GetDeviceInformationResponse.HardwareId);
	result->addInfo("Manufacturer", tds__GetDeviceInformationResponse.Manufacturer);
	result->addInfo("Model", tds__GetDeviceInformationResponse.Model);
	result->addInfo("SerialNumber", tds__GetDeviceInformationResponse.SerialNumber);
	CSoapUtils::getInstance().setSoapSuccessInfoAndDeleteSoap(psoap, result);
	return result;
}