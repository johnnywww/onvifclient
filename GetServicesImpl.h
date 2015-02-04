// GetServicesImpl.h: interface for the CGetServicesImpl class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GETSERVICESIMPL_H__FEACB7EB_52DB_4F84_BBE7_B77B206E3545__INCLUDED_)
#define AFX_GETSERVICESIMPL_H__FEACB7EB_52DB_4F84_BBE7_B77B206E3545__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "iGetServices.h"

class CGetServicesImpl: implements IGetServices
{
public:
	CGetServicesImpl();
	virtual ~CGetServicesImpl();
public:
	ImplInfMethod(CBaseRetInfo* getInfo(std::string serviceAddress, CBaseSoapSecurityInfo* securityInfo));
};

#endif // !defined(AFX_GETSERVICESIMPL_H__FEACB7EB_52DB_4F84_BBE7_B77B206E3545__INCLUDED_)
