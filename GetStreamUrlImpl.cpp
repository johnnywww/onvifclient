// GetStreamUrlImpl.cpp: implementation of the CGetStreamUrlImpl class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "GetStreamUrlImpl.h"
#include "StringRetInfo.h"
#include "appCommon.h"
#include "soapStub.h"
#include "SoapUtils.h"
#include "appTools.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CGetStreamUrlImpl::CGetStreamUrlImpl()
{

}

CGetStreamUrlImpl::~CGetStreamUrlImpl()
{

}

CBaseRetInfo* CGetStreamUrlImpl::getInfo(std::string serviceAddress, std::string mediaProfile, CBaseSoapSecurityInfo* securityInfo) 
{
	CStringRetInfo* result = new CStringRetInfo();
	result->setRetCode(RET_CODE_ERROR_NOT_SUPPORT);
	if (CAppTools::getInstance().getInvalidServiceAddressRetInfo(serviceAddress, result)) {
		return result;
	}
	if (mediaProfile.length() < 1) {
		result->setRetCode(RET_CODE_ERROR_INVALID_VALUE);
		result->setMessage("no media profile");
		return result;
	}
	struct soap* psoap = CSoapUtils::getInstance().newSoapRetInfo(securityInfo, result);
	if (NULL == psoap) {
		return result;
	}
	_trt__GetStreamUri trt__GetStreamUri;
	trt__GetStreamUri.ProfileToken = static_cast<char*>(CSoapUtils::getInstance().my_soap_malloc(psoap, sizeof(mediaProfile.length() + 1)));
	strcpy(trt__GetStreamUri.ProfileToken, mediaProfile.c_str());
	_trt__GetStreamUriResponse trt__GetStreamUriResponse;	
	int code = soap_call___trt__GetStreamUri(psoap, serviceAddress.c_str(), NULL, &trt__GetStreamUri, &trt__GetStreamUriResponse);
	if (SOAP_OK != code) {
		CSoapUtils::getInstance().setSoapErrorInfoAndDeleteSoap(RET_CODE_ERROR_RECV, psoap, result);
		return result;
	}
	if (NULL == trt__GetStreamUriResponse.MediaUri) {
		CSoapUtils::getInstance().setRetInfoAndDeleteSoap(RET_CODE_ERROR_NULL_OBJECT, "get mediauri is null", psoap, result);
		return result;
	}

	if (NULL == trt__GetStreamUriResponse.MediaUri->Uri) {
		CSoapUtils::getInstance().setRetInfoAndDeleteSoap(RET_CODE_ERROR_NULL_OBJECT, "get media uri is null", psoap, result);
		return result;
	}
	result->setInfo(trt__GetStreamUriResponse.MediaUri->Uri);
	CSoapUtils::getInstance().setSoapSuccessInfoAndDeleteSoap(psoap, result);	
	return result;
}





















