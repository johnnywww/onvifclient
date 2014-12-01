#include <string>
#pragma once
class COnvifDevice
{
public:
	COnvifDevice();
	~COnvifDevice();
private:
	std::string m_EpAddress;
	std::string m_Type;
	std::string m_ServiceAddress;
};

