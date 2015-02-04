#include "stdafx.h"
#include "Device.h"
#include "appTools.h"

CDevice::CDevice()
{
}


CDevice::~CDevice()
{
}

std::string CDevice::getEPAddress() const
{
	return m_EPAddress;
}

void CDevice::setEPAddress(std::string value)
{
	m_EPAddress = value;
}

std::vector<std::string> CDevice::getServiceAddress() const
{
	return m_ServiceAddress;
}

void CDevice::setServiceAddress(std::vector<std::string>& value)
{
	m_ServiceAddress.clear();
	for(std::vector<std::string>::iterator iter = value.begin(); iter != value.end(); iter++){
		m_ServiceAddress.push_back(*iter);
	}
}

std::string CDevice::getType() const
{
	return m_Type;
}

void CDevice::setType(std::string value)
{
	m_Type = value;
}

std::string CDevice::getMetaVersion() const
{
	return m_MetaVersion;
}

void CDevice::setMetaVersion(std::string value)
{
	m_MetaVersion = value;
}

std::string CDevice::getScopeTypes() const
{
	return m_ScopeTypes;
}

void CDevice::setScopeTypes(std::string value)
{
	m_ScopeTypes = value;
}

std::vector<std::string> CDevice::getScopes()
{
	return CAppTools::getInstance().split(m_ScopeTypes, " ");
}

std::string CDevice::getUser() const
{
	return m_User;
}

void CDevice::setUser(std::string value)
{
	m_User = value;
}

std::string CDevice::getPassword() const
{
	return m_Password;
}

void CDevice::setPassword(std::string value)
{
	m_Password = value;
}

std::string CDevice::getFirstServiceAddress()
{
	std::string result;
	std::vector<std::string>::iterator iter = m_ServiceAddress.begin();
	if (iter != m_ServiceAddress.end()) {
		result = *iter;
	}
	return result;
}
