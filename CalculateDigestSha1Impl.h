// CalculateDigestSha1Impl.h: interface for the CCalculateDigestSha1Impl class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CALCULATEDIGESTSHA1IMPL_H__8817DF0B_DA7F_4883_809F_14E2B6FE2124__INCLUDED_)
#define AFX_CALCULATEDIGESTSHA1IMPL_H__8817DF0B_DA7F_4883_809F_14E2B6FE2124__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "iCalculateDigest.h"

class CCalculateDigestSha1Impl  
{
public:
	CCalculateDigestSha1Impl();
	virtual ~CCalculateDigestSha1Impl();
public:
	ImplInfMethod(int calc(const char* nonce, const char* time, const char* password, char* value));
private:

};

#endif // !defined(AFX_CALCULATEDIGESTSHA1IMPL_H__8817DF0B_DA7F_4883_809F_14E2B6FE2124__INCLUDED_)
