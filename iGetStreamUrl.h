#pragma once
#include "infdefine.h"
#include "BaseRetInfo.h"

DeclareInterface(IGetStreamUrl)
	InfMethod(CBaseRetInfo* getInfo(std::string serviceAddress, std::string mediaProfile));
EndInterface
