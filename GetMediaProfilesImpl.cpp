// GetMediaProfilesImpl.cpp: implementation of the CGetMediaProfilesImpl class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "GetMediaProfilesImpl.h"
#include "StringListRetInfo.h"
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

CGetMediaProfilesImpl::CGetMediaProfilesImpl()
{

}

CGetMediaProfilesImpl::~CGetMediaProfilesImpl()
{

}

CBaseRetInfo* CGetMediaProfilesImpl::getInfo(std::string serviceAddress) {
	CStringListRetInfo* result = new CStringListRetInfo();
	result->setRetCode(RET_CODE_ERROR_NOT_SUPPORT);
	if (CAppTools::getInstance().getInvalidServiceAddressRetInfo(serviceAddress, result)) {
		return result;
	}
	struct soap* psoap = CSoapUtils::getInstance().newSoapRetInfo(result);
	if (NULL == psoap) {
		return result;
	}
	_trt__GetProfiles trt__GetProfiles;
	_trt__GetProfilesResponse trt__GetProfilesResponse;
	int code = soap_call___trt__GetProfiles(psoap, serviceAddress.c_str(), NULL, &trt__GetProfiles, &trt__GetProfilesResponse);
	if (SOAP_OK != code) {
		CSoapUtils::getInstance().setSoapErrorInfoAndDeleteSoap(RET_CODE_ERROR_RECV, psoap, result);
		return result;
	}
	if (trt__GetProfilesResponse.__sizeProfiles > 0)  {
		for(int i = 0; i < trt__GetProfilesResponse.__sizeProfiles; i++) {
			tt__Profile* profile = trt__GetProfilesResponse.Profiles[i];
			if ((NULL != profile) && (NULL != profile->Name)) {
				result->addInfo(profile->token);
			}
		}
	}
	CSoapUtils::getInstance().setSoapSuccessInfoAndDeleteSoap(psoap, result);
	return result;
}
