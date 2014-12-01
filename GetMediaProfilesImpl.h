// GetMediaProfilesImpl.h: interface for the CGetMediaProfilesImpl class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GETMEDIAPROFILESIMPL_H__E0B9364C_032A_48F5_AB34_94B64A9EE25E__INCLUDED_)
#define AFX_GETMEDIAPROFILESIMPL_H__E0B9364C_032A_48F5_AB34_94B64A9EE25E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "iGetMediaProfiles.h"

class CGetMediaProfilesImpl: implements IGetMediaProfiles
{
public:
	CGetMediaProfilesImpl();
	virtual ~CGetMediaProfilesImpl();
public:
	ImplInfMethod(CBaseRetInfo* getInfo(std::string serviceAddress));

};

#endif // !defined(AFX_GETMEDIAPROFILESIMPL_H__E0B9364C_032A_48F5_AB34_94B64A9EE25E__INCLUDED_)
