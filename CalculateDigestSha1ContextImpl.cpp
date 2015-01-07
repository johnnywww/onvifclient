// CalculateDigestSha1ContextImpl.cpp: implementation of the CCalculateDigestSha1ContextImpl class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "CalculateDigestSha1ContextImpl.h"
#include "sha2.h"
#include "appCommon.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CCalculateDigestSha1ContextImpl::CCalculateDigestSha1ContextImpl()
{

}

CCalculateDigestSha1ContextImpl::~CCalculateDigestSha1ContextImpl()
{

}


int CCalculateDigestSha1ContextImpl::calc(const char* nonce, const char* time, const char* password, char* value) {
    SHA1Context sha;  
    SHA1Reset(&sha);  
    SHA1Input(&sha, (unsigned char *)nonce, strlen(nonce));  
    SHA1Input(&sha, (unsigned char *)time, strlen(time));  
    SHA1Input(&sha, (unsigned char *)password, strlen(password));  
	uint8_t msg[SHA1HashSize];
    if (shaSuccess != SHA1Result(&sha, msg))  
    {  
        return RET_CODE_ERROR_INVALID_VALUE;
    } 
	memcpy(value, msg, SHA1HashSize);
	return RET_CODE_SUCCESS;
}
