#include "stdafx.h"
#include "StringMapRetInfo.h"


CStringMapRetInfo::CStringMapRetInfo()
{
	
}


CStringMapRetInfo::~CStringMapRetInfo()
{
}

void CStringMapRetInfo::addInfo(std::string key, std::string value)
{
	m_Infos.insert(std::pair<std::string, std::string>(key, value));
}

std::map<std::string, std::string>& CStringMapRetInfo::getInfos()
{
	return m_Infos;
}

std::string CStringMapRetInfo::getValue(std::string key)
{
	std::map<std::string, std::string>::iterator iter = m_Infos.find(key);
	if (iter != m_Infos.end())
		return iter->second;
	else
		return "";
}
