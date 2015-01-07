// SetSoapSecurityDigest2Impl.h: interface for the CSetSoapSecurityDigest2Impl class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SETSOAPSECURITYDIGEST2IMPL_H__DB3BD881_7A18_4034_BECD_0446A0E776A4__INCLUDED_)
#define AFX_SETSOAPSECURITYDIGEST2IMPL_H__DB3BD881_7A18_4034_BECD_0446A0E776A4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "iSetSoapSecurity.h"

/** SHA1 digest size in octets */  
 

/** Size of the random nonce */  
#define SOAP_WSSE_NONCELEN  (128)  

class CSetSoapSecurityDigest2Impl : implements ISetSoapSecurity 
{
public:
	CSetSoapSecurityDigest2Impl();
	virtual ~CSetSoapSecurityDigest2Impl();
public:
	ImplInfMethod(int setSecurity(struct soap* psoap, CBaseSoapSecurityInfo* securityInfo));
private:
	int soap_wsse_add_UsernameTokenDigest(struct soap *soap, const char *username, const char *password);
	void calc_nonce(struct soap *soap, char nonce[SOAP_WSSE_NONCELEN]);
	int soap_wsse_add_UsernameTokenText(struct soap *soap, const char *username, const char *password);
};

#endif // !defined(AFX_SETSOAPSECURITYDIGEST2IMPL_H__DB3BD881_7A18_4034_BECD_0446A0E776A4__INCLUDED_)
