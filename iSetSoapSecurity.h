#pragma once
#include "infDefine.h"
#include "soapH.h"
#include "BaseSoapSecurityInfo.h"

DeclareInterface(ISetSoapSecurity)
	InfMethod(int setSecurity(struct soap* psoap, CBaseSoapSecurityInfo* securityInfo));
EndInterface
