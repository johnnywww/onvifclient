// EncodeBase64SoapImpl.h: interface for the CEncodeBase64SoapImpl class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ENCODEBASE64SOAPIMPL_H__C7071DB7_CEE2_4F45_83B1_662E651E0712__INCLUDED_)
#define AFX_ENCODEBASE64SOAPIMPL_H__C7071DB7_CEE2_4F45_83B1_662E651E0712__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "iEncodeBase64.h"

class CEncodeBase64SoapImpl: implements IEncodeBase64
{
public:
	CEncodeBase64SoapImpl();
	virtual ~CEncodeBase64SoapImpl();
public:
	ImplInfMethod(int encode(const char* src, const int srcLen,  const void* param, char* value));
private:
};

#endif // !defined(AFX_ENCODEBASE64SOAPIMPL_H__C7071DB7_CEE2_4F45_83B1_662E651E0712__INCLUDED_)
