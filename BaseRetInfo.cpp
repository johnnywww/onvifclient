#include "stdafx.h"
#include "BaseRetInfo.h"


CBaseRetInfo::CBaseRetInfo()
{
}


CBaseRetInfo::~CBaseRetInfo()
{
}


int CBaseRetInfo::getRetCode()
{
	return m_RetCode;
}


void CBaseRetInfo::setRetCode(int retCode)
{
	m_RetCode = retCode;
}


void CBaseRetInfo::operator =(CBaseRetInfo& retInfo)
{
	if (this == &retInfo)
		return;
	this->m_RetCode = retInfo.m_RetCode;
	this->m_Message = retInfo.m_Message;
}

std::string CBaseRetInfo::getMessage()
{
	return m_Message;
}

void CBaseRetInfo::setMessage(std::string& message)
{
	m_Message = message;
}

void CBaseRetInfo::setMessage(const char* msg)
{
	if (NULL != msg) {
		m_Message = msg;
	}
	
}
