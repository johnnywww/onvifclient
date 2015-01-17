// EncodeBase64Impl.h: interface for the CEncodeBase64Impl class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ENCODEBASE64IMPL_H__567CBBB0_90CA_4DF8_B60A_99B5B30D7612__INCLUDED_)
#define AFX_ENCODEBASE64IMPL_H__567CBBB0_90CA_4DF8_B60A_99B5B30D7612__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "iEncodeBase64.h"

class CEncodeBase64Impl: implements IEncodeBase64
{
public:
	CEncodeBase64Impl();
	virtual ~CEncodeBase64Impl();
public:
	ImplInfMethod(int encode(const char* src, const void* param, char* value));
private:
};

#endif // !defined(AFX_ENCODEBASE64IMPL_H__567CBBB0_90CA_4DF8_B60A_99B5B30D7612__INCLUDED_)
