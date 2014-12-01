// GetMediaProfilesImpl.cpp: implementation of the CGetMediaProfilesImpl class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "GetMediaProfilesImpl.h"
#include "StringListRetInfo.h"
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

CGetMediaProfilesImpl::CGetMediaProfilesImpl()
{

}

CGetMediaProfilesImpl::~CGetMediaProfilesImpl()
{

}

CBaseRetInfo* CGetMediaProfilesImpl::getInfo(std::string serviceAddress) {
	CStringListRetInfo* result = new CStringListRetInfo();
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
	struct _trt__GetProfiles trt__GetProfiles;
	memset(&trt__GetProfiles, 0, sizeof(struct _trt__GetProfiles));	
	struct _trt__GetProfilesResponse trt__GetProfilesResponse;
	memset(&trt__GetProfilesResponse, 0, sizeof(struct _trt__GetProfilesResponse));
	int code = soap_call___trt__GetProfiles(soap, serviceAddress.c_str(), NULL, &trt__GetProfiles, &trt__GetProfilesResponse);
	if (SOAP_OK != code) {
		result->setRetCode(RET_CODE_ERROR_RECV);
		result->setMessage(*soap_faultstring(soap));
		CSoapUtils::getInstance().deleteSoap(soap);		
		return result;
	}
	if (trt__GetProfilesResponse.__sizeProfiles > 0)  {
		for(int i = 0; i < trt__GetProfilesResponse.__sizeProfiles; i++) {
			struct tt__Profile* profile = &(trt__GetProfilesResponse.Profiles[i]);
			if ((NULL != profile) && (NULL != profile->Name)) {
				result->addInfo(profile->Name);
			}
		}
	}
	result->setRetCode(RET_CODE_SUCCESS);
	CSoapUtils::getInstance().deleteSoap(soap);
	return result;
}
