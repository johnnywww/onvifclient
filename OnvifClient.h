// OnvifClient.h : main header file for the ONVIFCLIENT application
//

#if !defined(AFX_ONVIFCLIENT_H__EB16BAE9_F4F6_4F7C_9E9C_9861F8945B0A__INCLUDED_)
#define AFX_ONVIFCLIENT_H__EB16BAE9_F4F6_4F7C_9E9C_9861F8945B0A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// COnvifClientApp:
// See OnvifClient.cpp for the implementation of this class
//

class COnvifClientApp : public CWinApp
{
public:
	COnvifClientApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COnvifClientApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(COnvifClientApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ONVIFCLIENT_H__EB16BAE9_F4F6_4F7C_9E9C_9861F8945B0A__INCLUDED_)
