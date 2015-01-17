// EncodeBase64Impl.cpp: implementation of the CEncodeBase64Impl class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "EncodeBase64Impl.h"
#include "appcommon.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CEncodeBase64Impl::CEncodeBase64Impl()
{

}

CEncodeBase64Impl::~CEncodeBase64Impl()
{

}

int CEncodeBase64Impl::encode(const char* src, const void* param, char* value)
{
	   int inlen = (int)strlen((const char*)src);
	   for (; inlen >= 3; inlen -= 3)
	   {   
		   *value++ = base64digits[src[0] >> 2]; 
		   *value++ = base64digits[((src[0] << 4) & 0x30) | (src[1] >> 4)];
		   *value++ = base64digits[((src[1] << 2) & 0x3c) | (src[2] >> 6)];
		   *value++ = base64digits[src[2] & 0x3f];
		   src += 3;
	   }   
	   
	   if (inlen > 0)
	   {   
		   unsigned char fragment;
		   
		   *value++ = base64digits[src[0] >> 2]; 
		   fragment = (src[0] << 4) & 0x30;
		   
		   if (inlen > 1)
			   fragment |= src[1] >> 4;
		   
		   *value++ = base64digits[fragment];
		   *value++ = (inlen < 2) ? '=' : base64digits[(src[1] << 2) & 0x3c];
		   *value++ = '=';
	   }
	   
    *value = '\0';
	return RET_CODE_SUCCESS;
}
