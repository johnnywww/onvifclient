#pragma once
#include <string>
#include <vector>
class CDevice
{
public:
	CDevice();
	~CDevice();
public:
	std::string getEPAddress() const;
	void setEPAddress(std::string value);
	std::string getServiceAddress() const;
	void setServiceAddress(std::string value);
	std::string getType() const;
	void setType(std::string value);
	std::string getMetaVersion() const;
	void setMetaVersion(std::string value);
	std::string getScopeTypes() const;
	void setScopeTypes(std::string value);
	std::vector<std::string> getScopes();
	std::string getUser() const;
	void setUser(std::string value);
	std::string getPassword() const;
	void setPassword(std::string value);
private:
	std::string m_EPAddress;
	std::string m_ServiceAddress;
	std::string m_Type;
	std::string m_MetaVersion;
	std::string m_ScopeTypes;
	std::string m_User;
	std::string m_Password;
};

