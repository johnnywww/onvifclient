// CalculateDigestSha1ContextImpl.h: interface for the CCalculateDigestSha1ContextImpl class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CALCULATEDIGESTSHA1CONTEXTIMPL_H__946FFCA2_B4E0_4E1A_AFA5_DCA6F4F6CCF5__INCLUDED_)
#define AFX_CALCULATEDIGESTSHA1CONTEXTIMPL_H__946FFCA2_B4E0_4E1A_AFA5_DCA6F4F6CCF5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "iCalculateDigest.h"


class CCalculateDigestSha1ContextImpl : implements ICalculateDigest  
{
public:
	CCalculateDigestSha1ContextImpl();
	virtual ~CCalculateDigestSha1ContextImpl();
public:
	ImplInfMethod(int calc(const char* nonce, const char* time, const char* password, char* value));
private:

};

#endif // !defined(AFX_CALCULATEDIGESTSHA1CONTEXTIMPL_H__946FFCA2_B4E0_4E1A_AFA5_DCA6F4F6CCF5__INCLUDED_)
