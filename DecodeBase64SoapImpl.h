// DecodeBase64SoapImpl.h: interface for the CDecodeBase64SoapImpl class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DECODEBASE64SOAPIMPL_H__C4D97E22_B4A8_46BC_A7C6_63E7944809E0__INCLUDED_)
#define AFX_DECODEBASE64SOAPIMPL_H__C4D97E22_B4A8_46BC_A7C6_63E7944809E0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "iDecodeBase64.h"
class CDecodeBase64SoapImpl: implements IDecodeBase64  
{
public:
	CDecodeBase64SoapImpl();
	virtual ~CDecodeBase64SoapImpl();
public:
	ImplInfMethod(int decode(const char* src, const void* param, char* value, int len));

};

#endif // !defined(AFX_DECODEBASE64SOAPIMPL_H__C4D97E22_B4A8_46BC_A7C6_63E7944809E0__INCLUDED_)
