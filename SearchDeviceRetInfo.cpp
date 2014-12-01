#include "SearchDeviceRetInfo.h"
#include "containerList.h"

CSearchDeviceRetInfo::CSearchDeviceRetInfo()
{
	m_Devices = new CContainerList<CDevice>();
}


CSearchDeviceRetInfo::~CSearchDeviceRetInfo()
{
	delete m_Devices;
}

void CSearchDeviceRetInfo::addDevice(CDevice* device)
{
	m_Devices->add(device);
}

void CSearchDeviceRetInfo::clearDevice()
{
	m_Devices->clear();
}

IList<CDevice>* CSearchDeviceRetInfo::getDevices() const
{
	return m_Devices;
}
