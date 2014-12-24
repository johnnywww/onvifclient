#pragma once
#include "infdefine.h"
#include "BaseRetInfo.h"
#include "BaseSoapSecurityInfo.h"

DeclareInterface(IGetMediaProfiles)
	InfMethod(CBaseRetInfo* getInfo(std::string serviceAddress, CBaseSoapSecurityInfo* securityInfo));
EndInterface