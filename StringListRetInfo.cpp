// StringListRetInfo.cpp: implementation of the CStringListRetInfo class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "StringListRetInfo.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CStringListRetInfo::CStringListRetInfo()
{

}

CStringListRetInfo::~CStringListRetInfo()
{

}

void CStringListRetInfo::addInfo(std::string value)
{
	m_Infos.push_back(value);
}

std::list<std::string>& CStringListRetInfo::getInfos()
{
	return m_Infos;
}
