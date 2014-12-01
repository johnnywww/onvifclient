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
};

