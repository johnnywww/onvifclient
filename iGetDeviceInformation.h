#pragma once
#include "infdefine.h"
#include "BaseRetInfo.h"

DeclareInterface(IGetDeviceInformation)
	InfMethod(CBaseRetInfo* getInfo(std::string serviceAddress));
EndInterface
