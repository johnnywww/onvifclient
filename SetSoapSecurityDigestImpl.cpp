// SetSoapSecurityDigestImpl.cpp: implementation of the CSetSoapSecurityDigestImpl class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "SetSoapSecurityDigestImpl.h"
#include <memory>
#include "OnvifClient.h"

#include "sha1.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <ctype.h>
#include "appCommon.h"
#include "SoapUtils.h"

static const char base64digits[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

#define BAD     -1
static const signed char base64val[] = { 
    BAD,BAD,BAD,BAD, BAD,BAD,BAD,BAD, BAD,BAD,BAD,BAD, BAD,BAD,BAD,BAD,
		BAD,BAD,BAD,BAD, BAD,BAD,BAD,BAD, BAD,BAD,BAD,BAD, BAD,BAD,BAD,BAD,
		BAD,BAD,BAD,BAD, BAD,BAD,BAD,BAD, BAD,BAD,BAD, 62, BAD,BAD,BAD, 63, 
		52, 53, 54, 55,  56, 57, 58, 59,  60, 61,BAD,BAD, BAD,BAD,BAD,BAD,
		BAD,  0,  1,  2,   3,  4,  5,  6,   7,  8,  9, 10,  11, 12, 13, 14, 
		15, 16, 17, 18,  19, 20, 21, 22,  23, 24, 25,BAD, BAD,BAD,BAD,BAD,
		BAD, 26, 27, 28,  29, 30, 31, 32,  33, 34, 35, 36,  37, 38, 39, 40, 
		41, 42, 43, 44,  45, 46, 47, 48,  49, 50, 51,BAD, BAD,BAD,BAD,BAD
};

#define DECODE64(c)  (isascii(c) ? base64val[c] : BAD)

CSetSoapSecurityDigestImpl::CSetSoapSecurityDigestImpl()
{

}

CSetSoapSecurityDigestImpl::~CSetSoapSecurityDigestImpl()
{

}

int CSetSoapSecurityDigestImpl::setSecurity(struct soap* psoap, CBaseSoapSecurityInfo* securityInfo) 
{
	if (NULL == psoap) {
		return RET_CODE_ERROR_NULL_OBJECT;
	}
	if (NULL == securityInfo) {
		return RET_CODE_ERROR_NULL_OBJECT;
	}
	struct SOAP_ENV__Header* header = psoap->header;
	if (NULL == header) {
		return RET_CODE_ERROR_NULL_OBJECT;
	}

	header->wsse__Security = (struct _wsse__Security *)CSoapUtils::getInstance().my_soap_malloc(psoap, sizeof(struct _wsse__Security));	
	header->wsse__Security->UsernameToken = (struct _wsse__UsernameToken *)CSoapUtils::getInstance().my_soap_malloc(psoap, sizeof(struct _wsse__UsernameToken));

	header->wsse__Security->UsernameToken->Nonce = (char*)CSoapUtils::getInstance().my_soap_malloc(psoap, 64);
	strcpy(header->wsse__Security->UsernameToken->Nonce,"LKqI6G/AikKCQrN0zqZFlg=="); //×¢ÒâÕâÀï
	
	header->wsse__Security->UsernameToken->wsu__Created = (char*)CSoapUtils::getInstance().my_soap_malloc(psoap, 64);
	strcpy(header->wsse__Security->UsernameToken->wsu__Created,"2014-09-16T07:50:45Z");

	header->wsse__Security->UsernameToken->Username = (char *)CSoapUtils::getInstance().my_soap_malloc(psoap, 64);	
	strcpy(header->wsse__Security->UsernameToken->Username, securityInfo->getUserName().c_str());
	header->wsse__Security->UsernameToken->Password = (struct _wsse__Password *)CSoapUtils::getInstance().my_soap_malloc(psoap, sizeof(struct _wsse__Password));
	header->wsse__Security->UsernameToken->Password->Type = (char*)CSoapUtils::getInstance().my_soap_malloc(psoap, 128);
	strcpy(header->wsse__Security->UsernameToken->Password->Type,\
		"http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-username-token-profile-1.0#PasswordDigest");
	header->wsse__Security->UsernameToken->Password->__item = (char*)CSoapUtils::getInstance().my_soap_malloc(psoap, 128);
	genrateDigest((unsigned char*)header->wsse__Security->UsernameToken->Password->__item,\
                (unsigned char*)securityInfo->getPassword().c_str(),header->wsse__Security->UsernameToken->Nonce,header->wsse__Security->UsernameToken->wsu__Created);
	return RET_CODE_SUCCESS;
}

void CSetSoapSecurityDigestImpl::base64_bits_to_64(unsigned char *out, const unsigned char *in)
{
    int inlen = (int)strlen((const char*)in);
	for (; inlen >= 3; inlen -= 3)
    {   
        *out++ = base64digits[in[0] >> 2]; 
        *out++ = base64digits[((in[0] << 4) & 0x30) | (in[1] >> 4)];
        *out++ = base64digits[((in[1] << 2) & 0x3c) | (in[2] >> 6)];
        *out++ = base64digits[in[2] & 0x3f];
        in += 3;
    }   
	
    if (inlen > 0)
    {   
        unsigned char fragment;
		
        *out++ = base64digits[in[0] >> 2]; 
        fragment = (in[0] << 4) & 0x30;
		
        if (inlen > 1)
            fragment |= in[1] >> 4;
		
        *out++ = base64digits[fragment];
        *out++ = (inlen < 2) ? '=' : base64digits[(in[1] << 2) & 0x3c];
        *out++ = '=';
    }
	
    *out = '\0';
}

int CSetSoapSecurityDigestImpl::base64_64_to_bits(char *out, const char *in)
{
    int len = 0;
    register unsigned char digit1, digit2, digit3, digit4;
	
    if (in[0] == '+' && in[1] == ' ')
        in += 2;
    if (*in == '\r')
        return(0);
	
    do {
        digit1 = in[0];
        if (DECODE64(digit1) == BAD)
            return(-1);
        digit2 = in[1];
        if (DECODE64(digit2) == BAD)
            return(-1);
        digit3 = in[2];
        if (digit3 != '=' && DECODE64(digit3) == BAD)
            return(-1);
        digit4 = in[3];
        if (digit4 != '=' && DECODE64(digit4) == BAD)
            return(-1);
        in += 4;
        *out++ = (DECODE64(digit1) << 2) | (DECODE64(digit2) >> 4);
        ++len;
        if (digit3 != '=')
        {
            *out++ = ((DECODE64(digit2) << 4) & 0xf0) | (DECODE64(digit3) >> 2);
            ++len;
            if (digit4 != '=')
            {
                *out++ = ((DECODE64(digit3) << 6) & 0xc0) | DECODE64(digit4);
                ++len;
            }
        }
    } while (*in && *in != '\r' && digit4 != '=');
	
    return (len);
}

void CSetSoapSecurityDigestImpl::genrateDigest(unsigned char *pwddigest_out, unsigned char *pwd, char *nonc, char *time)
{
    const unsigned char *tdist;
    unsigned char dist[1024] = {0};
    char tmp[1024] = {0};
    unsigned char bout[1024] = {0};
    strcpy(tmp,nonc);
    base64_64_to_bits((char*)bout, tmp);
    sprintf(tmp,"%s%s%s",bout,time,pwd);
    SHA1 sha1;
	sha1.Input((const unsigned char*)tmp,strlen((const char*)tmp));
	sha1.Result((unsigned*)dist);
    tdist = dist;
    memset(bout,0x0,1024);
    base64_bits_to_64(bout, tdist);
    strcpy((char *)pwddigest_out,(const char*)bout);
}