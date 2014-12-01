// GetStreamUrlImpl.h: interface for the CGetStreamUrlImpl class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GETSTREAMURLIMPL_H__C9BD256B_C21B_48A4_B283_5B92106798D8__INCLUDED_)
#define AFX_GETSTREAMURLIMPL_H__C9BD256B_C21B_48A4_B283_5B92106798D8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "iGetStreamUrl.h"

class CGetStreamUrlImpl: implements IGetStreamUrl
{
public:
	CGetStreamUrlImpl();
	virtual ~CGetStreamUrlImpl();
public:
	ImplInfMethod(CBaseRetInfo* getInfo(std::string serviceAddress, std::string mediaProfile));

};

#endif // !defined(AFX_GETSTREAMURLIMPL_H__C9BD256B_C21B_48A4_B283_5B92106798D8__INCLUDED_)
