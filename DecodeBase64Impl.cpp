// DecodeBase64Impl.cpp: implementation of the CDecodeBase64Impl class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "DecodeBase64Impl.h"
#include "appcommon.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CDecodeBase64Impl::CDecodeBase64Impl()
{

}

CDecodeBase64Impl::~CDecodeBase64Impl()
{

}

int CDecodeBase64Impl::decode(const char* src, const void* param, char* value, int len)
{
	   int calcLen = 0;
	   register unsigned char digit1, digit2, digit3, digit4;
	   
	   if (src[0] == '+' && src[1] == ' ')
		   src += 2;
	   if (*src == '\r')
		   return(0);
	   
	   do {
		   digit1 = src[0];
		   if (DECODE64(digit1) == BAD)
			   return(-1);
		   digit2 = src[1];
		   if (DECODE64(digit2) == BAD)
			   return(-1);
		   digit3 = src[2];
		   if (digit3 != '=' && DECODE64(digit3) == BAD)
			   return(-1);
		   digit4 = src[3];
		   if (digit4 != '=' && DECODE64(digit4) == BAD)
			   return(-1);
		   src += 4;
		   *value++ = (DECODE64(digit1) << 2) | (DECODE64(digit2) >> 4);
		   ++calcLen;
		   if (digit3 != '=')
		   {
			   *value++ = ((DECODE64(digit2) << 4) & 0xf0) | (DECODE64(digit3) >> 2);
			   ++calcLen;
			   if (digit4 != '=')
			   {
				   *value++ = ((DECODE64(digit3) << 6) & 0xc0) | DECODE64(digit4);
				   ++calcLen;
			   }
		   }
	   } while (*src && *src != '\r' && digit4 != '=');
	   
    return RET_CODE_SUCCESS;
}
