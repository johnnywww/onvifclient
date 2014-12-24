#include "stdafx.h"
#include "FactoryImpl.h"
#include "SearchDeviceImpl.h"
#include "GetDeviceInformationImpl.h"
#include "GetMediaProfilesImpl.h"
#include "GetStreamUrlImpl.h"
#include "SetSoapSecurityDigestImpl.h"


CFactoryImpl::CFactoryImpl()
{
}


CFactoryImpl::~CFactoryImpl()
{
}


ISearchDevice* CFactoryImpl::createSearchDevice() {
	return new CSearchDeviceImpl();
}

IGetDeviceInformation* CFactoryImpl::createGetDeviceInformation() {
	return new CGetDeviceInformationImpl();
}

IGetMediaProfiles* CFactoryImpl::createGetMediaProfiles() {
	return new CGetMediaProfilesImpl;
}

IGetStreamUrl* CFactoryImpl::createGetStreamUrl() {
	return new CGetStreamUrlImpl();
}

ISetSoapSecurity* CFactoryImpl::createSetSoapSecurity() {
	return new CSetSoapSecurityDigestImpl();
}