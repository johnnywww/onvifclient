#include "iSearchDevice.h"
#include "soapH.h"
#pragma once
class CSearchDeviceImpl :
	implements ISearchDevice
{
public:
	CSearchDeviceImpl();
	~CSearchDeviceImpl();
	ImplInfMethod(CBaseRetInfo*  getDevices());
private:
	void detectDevice(struct soap* soap, wsdd__ProbeType *req_, CBaseRetInfo* retInfo);
};

