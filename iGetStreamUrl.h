#pragma once
#include "infdefine.h"
#include "BaseRetInfo.h"
#include "BaseSoapSecurityInfo.h"

DeclareInterface(IGetStreamUrl)
	InfMethod(CBaseRetInfo* getInfo(std::string serviceAddress, std::string mediaProfile, CBaseSoapSecurityInfo* securityInfo));
EndInterface
