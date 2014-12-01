#pragma once
#include "BaseRetInfo.h"
#include "iList.h"
#include "Device.h"

class CSearchDeviceRetInfo :
	public CBaseRetInfo
{
public:
	CSearchDeviceRetInfo();
	~CSearchDeviceRetInfo();	
public:
	void addDevice(CDevice* device);
	void clearDevice();
	IList<CDevice>* getDevices() const;
private:
	IList<CDevice>* m_Devices;
};

