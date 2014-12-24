#include "iSearchDevice.h"
#include "soapH.h"
#pragma once
class CSearchDeviceImpl :
	implements ISearchDevice
{
public:
	CSearchDeviceImpl();
	~CSearchDeviceImpl();
	ImplInfMethod(CBaseRetInfo*  getDevices(CBaseSoapSecurityInfo* securityInfo));
private:
	void detectDevice(struct soap* soap, wsdd__ProbeType *req_, CBaseRetInfo* retInfo);
};

