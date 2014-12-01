#pragma once
#include <map>
#include "BaseRetInfo.h"

class CStringMapRetInfo :
	public CBaseRetInfo
{
public:
	CStringMapRetInfo();
	~CStringMapRetInfo();
public:
	void addInfo(std::string key, std::string value);
	std::map<std::string, std::string>& getInfos();
	std::string getValue(std::string key);
private:
	std::map<std::string, std::string> m_Infos;
};

