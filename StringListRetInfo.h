// StringListRetInfo.h: interface for the CStringListRetInfo class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STRINGLISTRETINFO_H__7FF82B57_2AF1_452A_AC87_E20602D09C03__INCLUDED_)
#define AFX_STRINGLISTRETINFO_H__7FF82B57_2AF1_452A_AC87_E20602D09C03__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <string>
#include <list>

#include "BaseRetInfo.h"

class CStringListRetInfo : public CBaseRetInfo
{
public:
	CStringListRetInfo();
	virtual ~CStringListRetInfo();
public:
	void addInfo(std::string value);
	std::list<std::string>& getInfos();
private:
	std::list<std::string> m_Infos;
};

#endif // !defined(AFX_STRINGLISTRETINFO_H__7FF82B57_2AF1_452A_AC87_E20602D09C03__INCLUDED_)
