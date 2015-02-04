#pragma once
#include "infdefine.h"
#include "BaseRetInfo.h"
#include "BaseSoapSecurityInfo.h"

DeclareInterface(IGetServices)
	InfMethod(CBaseRetInfo* getInfo(std::string serviceAddress, CBaseSoapSecurityInfo* securityInfo));
EndInterface