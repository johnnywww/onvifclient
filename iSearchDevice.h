#pragma once
#include "infdefine.h"
#include "BaseRetInfo.h"
#include "BaseSoapSecurityInfo.h"

DeclareInterface(ISearchDevice)
	InfMethod(CBaseRetInfo* getDevices(CBaseSoapSecurityInfo* securityInfo));
EndInterface


