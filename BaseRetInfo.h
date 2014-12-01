#include <string>
#pragma once
class CBaseRetInfo
{
public:
	CBaseRetInfo();
	~CBaseRetInfo();
private:
	int m_RetCode;
	std::string m_Message;

public:
	int getRetCode();
	void setRetCode(int retCode);
	std::string getMessage();
	void setMessage(std::string& message);
	void setMessage(const char* msg);
	void operator =(CBaseRetInfo& retInfo);
};

