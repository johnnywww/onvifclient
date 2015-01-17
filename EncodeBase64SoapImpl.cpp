// EncodeBase64SoapImpl.cpp: implementation of the CEncodeBase64SoapImpl class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "EncodeBase64SoapImpl.h"
#include "appCommon.h"
#include "stdsoap2.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CEncodeBase64SoapImpl::CEncodeBase64SoapImpl()
{

}

CEncodeBase64SoapImpl::~CEncodeBase64SoapImpl()
{

}

int CEncodeBase64SoapImpl::encode(const char* src, const int srcLen,  const void* param, char* value)
{
	if (NULL == param)
		return RET_CODE_ERROR_NULL_VALUE;
	soap_s2base64((struct soap*)param, (unsigned char*)src, value, srcLen); 
	return RET_CODE_SUCCESS;
}
