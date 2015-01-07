// CalculateDigestSha1Impl.cpp: implementation of the CCalculateDigestSha1Impl class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "CalculateDigestSha1Impl.h"
#include "appCommon.h"
#include "sha1.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CCalculateDigestSha1Impl::CCalculateDigestSha1Impl()
{

}

CCalculateDigestSha1Impl::~CCalculateDigestSha1Impl()
{

}

int CCalculateDigestSha1Impl::calc(const char* nonce, const char* time, const char* password, char* value) {
	SHA1 sha1;
	sha1.Reset();
    sha1.Input((unsigned char *)nonce, strlen(nonce));  
    sha1.Input((unsigned char *)time, strlen(time));  
    sha1.Input((unsigned char *)password, strlen(password));  
    if (!sha1.Result((unsigned*)value))  
    {  
        return RET_CODE_ERROR_INVALID_VALUE;
    } 
	return RET_CODE_SUCCESS;
}
