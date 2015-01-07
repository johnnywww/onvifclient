// DecodeBase64Impl.h: interface for the CDecodeBase64Impl class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DECODEBASE64IMPL_H__F73807A4_B251_45DC_8515_390B884A37B5__INCLUDED_)
#define AFX_DECODEBASE64IMPL_H__F73807A4_B251_45DC_8515_390B884A37B5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "iDecodeBase64.h"
class CDecodeBase64Impl  
{
public:
	CDecodeBase64Impl();
	virtual ~CDecodeBase64Impl();
public:
	ImplInfMethod(int decode(const char* src, const void* param, char* value, int len));
};

#endif // !defined(AFX_DECODEBASE64IMPL_H__F73807A4_B251_45DC_8515_390B884A37B5__INCLUDED_)
