// StringRetInfo.h: interface for the CStringRetInfo class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STRINGRETINFO_H__E53659E5_B7C6_471F_973B_3DEC946B5233__INCLUDED_)
#define AFX_STRINGRETINFO_H__E53659E5_B7C6_471F_973B_3DEC946B5233__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "BaseRetInfo.h"

class CStringRetInfo : public CBaseRetInfo
{
public:
	CStringRetInfo();
	virtual ~CStringRetInfo();
	void setInfo(std::string info);
	std::string getInfo();
private:
	std::string m_Info;
};

#endif // !defined(AFX_STRINGRETINFO_H__E53659E5_B7C6_471F_973B_3DEC946B5233__INCLUDED_)
