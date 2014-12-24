#pragma once
#include "infdefine.h"
#include "BaseRetInfo.h"
#include "BaseSoapSecurityInfo.h"

DeclareInterface(IGetDeviceInformation)
	InfMethod(CBaseRetInfo* getInfo(std::string serviceAddress, CBaseSoapSecurityInfo* securityInfo));
EndInterface
