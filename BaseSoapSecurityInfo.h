// BaseSoapSecurityInfo.h: interface for the CBaseSoapSecurityInfo class.
//
//////////////////////////////////////////////////////////////////////

#include <string>
#pragma once

class CBaseSoapSecurityInfo  
{
public:
	CBaseSoapSecurityInfo();
	virtual ~CBaseSoapSecurityInfo();
public:
	std::string getUserName();
	std::string getPassword();
	void setUserName(std::string userName);
	void setPassword(std::string password);
private: 
	std::string m_UserName;
	std::string m_Password;
};


