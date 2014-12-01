// StringRetInfo.cpp: implementation of the CStringRetInfo class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "OnvifClient.h"
#include "StringRetInfo.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CStringRetInfo::CStringRetInfo()
{

}

CStringRetInfo::~CStringRetInfo()
{

}

std::string CStringRetInfo::getInfo()
{
	return m_Info;
}

void CStringRetInfo::setInfo(std::string info)
{
	m_Info = info;	
}
