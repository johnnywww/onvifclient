#pragma once
#include "IFactory.h"
#include "appCommon.h"

class CFactoryImpl: implements IFactory
{
public:
	CFactoryImpl();
	~CFactoryImpl();
	OneInstance(CFactoryImpl)
public:
	ImplInfMethod(ISearchDevice* createSearchDevice());
	ImplInfMethod(IGetDeviceInformation* createGetDeviceInformation());
	ImplInfMethod(IGetMediaProfiles* createGetMediaProfiles());
	ImplInfMethod(IGetStreamUrl* createGetStreamUrl());
	ImplInfMethod(ISetSoapSecurity* createSetSoapSecurity());
	ImplInfMethod(ICalculateDigest* createCalculateDigest());
	ImplInfMethod(IEncodeBase64* createEncodeBase64());
	ImplInfMethod(IDecodeBase64* createDecodeBase64());
	ImplInfMethod(IGetServices* createGetServices());
};

