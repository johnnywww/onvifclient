// BaseSoapSecurityInfo.cpp: implementation of the CBaseSoapSecurityInfo class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "OnvifClient.h"
#include "BaseSoapSecurityInfo.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CBaseSoapSecurityInfo::CBaseSoapSecurityInfo()
{

}

CBaseSoapSecurityInfo::~CBaseSoapSecurityInfo()
{

}

std::string CBaseSoapSecurityInfo::getUserName()
{
	return m_UserName;
}

std::string CBaseSoapSecurityInfo::getPassword()
{
	return m_Password;
}

void CBaseSoapSecurityInfo::setUserName(std::string userName)
{
	m_UserName = userName;
}

void CBaseSoapSecurityInfo::setPassword(std::string password)
{
	m_Password = password;
}
