#include "stdafx.h"
#include "FactoryImpl.h"
#include "SearchDeviceImpl.h"
#include "GetDeviceInformationImpl.h"
#include "GetMediaProfilesImpl.h"
#include "GetStreamUrlImpl.h"
#include "SetSoapSecurityDigestImpl.h"
#include "SetSoapSecurityDigest2Impl.h"
#include "CalculateDigestSha1ContextImpl.h"
#include "EncodeBase64SoapImpl.h"
#include "DecodeBase64SoapImpl.h"

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

ICalculateDigest* CFactoryImpl::createCalculateDigest()
{
	return new CCalculateDigestSha1ContextImpl();
}

IEncodeBase64* CFactoryImpl::createEncodeBase64() {
	return new CEncodeBase64SoapImpl();
}

IDecodeBase64* CFactoryImpl::createDecodeBase64()
{
	return new CDecodeBase64SoapImpl();
}
