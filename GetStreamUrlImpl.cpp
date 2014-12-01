// GetStreamUrlImpl.cpp: implementation of the CGetStreamUrlImpl class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "GetStreamUrlImpl.h"
#include "StringRetInfo.h"
#include "appCommon.h"
#include "soapStub.h"
#include "SoapUtils.h"

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

CBaseRetInfo* CGetStreamUrlImpl::getInfo(std::string serviceAddress, std::string mediaProfile) {
	CStringRetInfo* result = new CStringRetInfo();
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
	struct _trt__GetStreamUri trt__GetStreamUri;
	memset(&trt__GetStreamUri, 0, sizeof(struct _trt__GetStreamUri));	
	trt__GetStreamUri.ProfileToken = static_cast<char*>(CSoapUtils::getInstance().my_soap_malloc(soap, sizeof(mediaProfile.length() + 1)));
	strcpy(trt__GetStreamUri.ProfileToken, mediaProfile.c_str());
	struct _trt__GetStreamUriResponse trt__GetStreamUriResponse;
	memset(&trt__GetStreamUriResponse, 0, sizeof(struct _trt__GetStreamUriResponse));
	int code = soap_call___trt__GetStreamUri(soap, serviceAddress.c_str(), NULL, &trt__GetStreamUri, &trt__GetStreamUriResponse);
	if (SOAP_OK != code) {
		result->setRetCode(RET_CODE_ERROR_RECV);
		result->setMessage(*soap_faultstring(soap));
		CSoapUtils::getInstance().deleteSoap(soap);
		return result;
	}
	if (NULL == trt__GetStreamUriResponse.MediaUri) {
		result->setRetCode(RET_CODE_ERROR_NULL_OBJECT);
		result->setMessage("get mediauri is null");
		CSoapUtils::getInstance().deleteSoap(soap);	
		return result;
	}

	if (NULL == trt__GetStreamUriResponse.MediaUri->Uri) {
		result->setRetCode(RET_CODE_ERROR_NULL_OBJECT);
		result->setMessage("get media uri is null");
		CSoapUtils::getInstance().deleteSoap(soap);	
		return result;
	}
	result->setInfo(trt__GetStreamUriResponse.MediaUri->Uri);
	result->setRetCode(RET_CODE_SUCCESS);
	CSoapUtils::getInstance().deleteSoap(soap);	
	return result;
}





















