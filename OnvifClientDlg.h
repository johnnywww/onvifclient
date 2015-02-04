// OnvifClientDlg.h : header file
//

#if !defined(AFX_ONVIFCLIENTDLG_H__9F0AC098_47C9_435B_AE0A_C22CB12324D2__INCLUDED_)
#define AFX_ONVIFCLIENTDLG_H__9F0AC098_47C9_435B_AE0A_C22CB12324D2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Device.h"
#include "BaseRetInfo.h"
#include "BaseSoapSecurityInfo.h"

/////////////////////////////////////////////////////////////////////////////
// COnvifClientDlg dialog

class COnvifClientDlg : public CDialog
{
// Construction
public:
	COnvifClientDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(COnvifClientDlg)
	enum { IDD = IDD_ONVIFCLIENT_DIALOG };
	CEdit	m_EdtEPAddress;
	CComboBox	m_ComboServiceAddress;
	CComboBox	m_ComboMediaProfiles;
	CEdit	m_EdtMediaUrl;
	CEdit	m_EdtModel;
	CEdit	m_EdtManufacture;
	CEdit	m_EdtMetaVersion;
	CEdit	m_EdtUser;
	CEdit	m_EdtType;
	CEdit	m_EdtPassword;
	CListBox	m_LBoxScopes;
	CListBox	m_LBoxDevices;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COnvifClientDlg)
	public:
	virtual BOOL DestroyWindow();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(COnvifClientDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonSearch();
	afx_msg void OnBtnInfo();
	afx_msg void OnDblclkListDevice();
	afx_msg void OnBtnInfomediauri();
	afx_msg void OnBtnProbe();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:
	void clearListBoxDevices();
	CString getCString(std::string& value);
	void clearEdtText(CWnd& edtWnd);
	void clearDeviceText();
	
	void clearDeviceInformation();
	
	void clearMediaInfo();
	
	std::string getServiceAddress();
	
	std::string getSTDStr(CString& theCStr);
	BOOL notifyErrorRetInfo(CBaseRetInfo* retInfo);
	std::string getWindowTextStr(CWnd& wnd);
	std::string getMediaEndPoint();
	CBaseSoapSecurityInfo* getSoapSecurityInfo();
	void clearServiceAddress();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ONVIFCLIENTDLG_H__9F0AC098_47C9_435B_AE0A_C22CB12324D2__INCLUDED_)
