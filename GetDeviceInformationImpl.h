#pragma once
#include "iGetDeviceInformation.h"
class CGetDeviceInformationImpl: implements IGetDeviceInformation
{
public:
	CGetDeviceInformationImpl();
	~CGetDeviceInformationImpl();
public:
	ImplInfMethod(CBaseRetInfo* getInfo(std::string serviceAddress, CBaseSoapSecurityInfo* securityInfo));
};

