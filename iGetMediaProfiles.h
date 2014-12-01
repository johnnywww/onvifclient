#pragma once
#include "infdefine.h"
#include "BaseRetInfo.h"

DeclareInterface(IGetMediaProfiles)
	InfMethod(CBaseRetInfo* getInfo(std::string serviceAddress));
EndInterface