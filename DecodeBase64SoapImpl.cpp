// DecodeBase64SoapImpl.cpp: implementation of the CDecodeBase64SoapImpl class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "DecodeBase64SoapImpl.h"
#include "stdsoap2.h"
#include "appCommon.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CDecodeBase64SoapImpl::CDecodeBase64SoapImpl()
{

}

CDecodeBase64SoapImpl::~CDecodeBase64SoapImpl()
{

}

int CDecodeBase64SoapImpl::decode(const char* src, const void* param, char* value, int len)
{
	if (NULL == param)
		return RET_CODE_ERROR_NULL_VALUE;
	if (NULL == soap_base642s((struct soap*)param, src, value, len, NULL)) {
		return RET_CODE_ERROR_INVALID_VALUE;
	}
	return RET_CODE_SUCCESS;
}
