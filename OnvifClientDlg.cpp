// OnvifClientDlg.cpp : implementation file
//

#include "stdafx.h"
#include "OnvifClient.h"
#include "OnvifClientDlg.h"
#include "FactoryImpl.h"
#include <memory>

#include "appTools.h"
#include "containerList.h"
#include "SearchDeviceRetInfo.h"
#include "StringMapRetInfo.h"
#include "StringListRetInfo.h"
#include "StringRetInfo.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// COnvifClientDlg dialog

COnvifClientDlg::COnvifClientDlg(CWnd* pParent /*=NULL*/)
	: CDialog(COnvifClientDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(COnvifClientDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void COnvifClientDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(COnvifClientDlg)
	DDX_Control(pDX, IDC_COMBO_MEDIA_PROFILES, m_ComboMediaProfiles);
	DDX_Control(pDX, IDC_EDIT_MEDIAURL, m_EdtMediaUrl);
	DDX_Control(pDX, IDC_EDIT_MODEL, m_EdtModel);
	DDX_Control(pDX, IDC_EDIT_MANUFACTURE, m_EdtManufacture);
	DDX_Control(pDX, IDC_EDIT_METAVERSION, m_EdtMetaVersion);
	DDX_Control(pDX, IDC_EDIT_USER, m_EdtUser);
	DDX_Control(pDX, IDC_EDIT_TYPE, m_EdtType);
	DDX_Control(pDX, IDC_EDIT_SERVICEADDRESS, m_EdtServiceAddress);
	DDX_Control(pDX, IDC_EDIT_PASSWORD, m_EdtPassword);
	DDX_Control(pDX, IDC_EDIT_EPADDRESS, m_EdtEPAddress);
	DDX_Control(pDX, IDC_LIST_SCOPES, m_LBoxScopes);
	DDX_Control(pDX, IDC_LIST_DEVICE, m_LBoxDevices);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(COnvifClientDlg, CDialog)
	//{{AFX_MSG_MAP(COnvifClientDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_SEARCH, OnButtonSearch)
	ON_BN_CLICKED(IDC_BTN_INFO, OnBtnInfo)
	ON_LBN_DBLCLK(IDC_LIST_DEVICE, OnDblclkListDevice)
	ON_BN_CLICKED(IDC_BTN_INFOMEDIAURI, OnBtnInfomediauri)
	ON_BN_CLICKED(IDC_BTN_PROBE, OnBtnProbe)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// COnvifClientDlg message handlers

BOOL COnvifClientDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void COnvifClientDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void COnvifClientDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR COnvifClientDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void COnvifClientDlg::clearListBoxDevices() {
	for (int i = 0; i < m_LBoxDevices.GetCount(); i++) {
		CDevice* device = static_cast<CDevice*>(m_LBoxDevices.GetItemDataPtr(i));
		delete device;
	}
	m_LBoxDevices.ResetContent();
}


CString COnvifClientDlg::getCString(std::string& value)
{
	CString result;
	result = value.c_str();
	return result;
}

void COnvifClientDlg::clearEdtText(CWnd& edtWnd) {
	edtWnd.SetWindowText(_T(""));
}

void COnvifClientDlg::clearDeviceText() {
	clearEdtText(m_EdtEPAddress);
	clearEdtText(m_EdtPassword);
	clearEdtText(m_EdtServiceAddress);
	clearEdtText(m_EdtType);
	clearEdtText(m_EdtUser);
	clearEdtText(m_EdtMetaVersion);
	m_LBoxScopes.ResetContent();
	clearDeviceInformation();
	
}

void COnvifClientDlg::OnButtonSearch() 
{
	std::auto_ptr<ISearchDevice> ap(CFactoryImpl::getInstance().createSearchDevice());
	CBaseSoapSecurityInfo* securityInfo = getSoapSecurityInfo();
	std::auto_ptr<CBaseSoapSecurityInfo> securityInfoAp(securityInfo);
	CSearchDeviceRetInfo* retInfo1 = static_cast<CSearchDeviceRetInfo*>(ap->getDevices(securityInfo));
	std::auto_ptr<CSearchDeviceRetInfo> retInfo(retInfo1);
	if (notifyErrorRetInfo(retInfo1)) {
		return;
	}
	clearListBoxDevices();
	clearDeviceText();
	for (int i = 0; i < retInfo->getDevices()->count(); i++) {
		CDevice* device = new CDevice();
		*device = *(retInfo->getDevices()->get(i));			
		int index = m_LBoxDevices.AddString(getCString(device->getServiceAddress()));
		m_LBoxDevices.SetItemDataPtr(index, device);
	}
}

std::string COnvifClientDlg::getSTDStr(CString& theCStr){
	// Convert the CString to a regular char array
	std::string result = theCStr.GetBuffer(0);
	theCStr.ReleaseBuffer();
	return result;
}

BOOL COnvifClientDlg::notifyErrorRetInfo(CBaseRetInfo* retInfo) {
	if (NULL == retInfo) 
		return FALSE;
	if (!CAppTools::getInstance().isRetSuccess(retInfo->getRetCode())) {
		MessageBox(getCString(retInfo->getMessage()));
		return TRUE;
	} else {
		return false;
	}

}

std::string COnvifClientDlg::getMediaEndPoint() {
	std::string serviceAddress = getServiceAddress();
	return serviceAddress + "/media";
}

CBaseSoapSecurityInfo* COnvifClientDlg::getSoapSecurityInfo() {
	CBaseSoapSecurityInfo* result = NULL;
	std::string user = getWindowTextStr(m_EdtUser);
	std::string password = getWindowTextStr(m_EdtPassword);
	if (0 < user.length() && 0 < password.length()) {
		result = new CBaseSoapSecurityInfo();
		result->setUserName(user);
		result->setPassword(password);
	}
	return result;
}

void COnvifClientDlg::OnBtnInfo() 
{	
	std::auto_ptr<IGetDeviceInformation> ap(CFactoryImpl::getInstance().createGetDeviceInformation());
	CBaseSoapSecurityInfo* securityInfo = getSoapSecurityInfo();
	std::auto_ptr<CBaseSoapSecurityInfo> securityInfoAp(securityInfo);
	std::string serviceAddress = getServiceAddress();
	CStringMapRetInfo* retInfo11 = static_cast<CStringMapRetInfo*>(ap->getInfo(serviceAddress, securityInfo));
	std::auto_ptr<CStringMapRetInfo>retInfo(retInfo11);
	if (notifyErrorRetInfo(retInfo11)) {
		return;
	}
	clearDeviceInformation();
	m_EdtManufacture.SetWindowText(getCString(retInfo->getValue("Manufacturer")));
	m_EdtModel.SetWindowText(getCString(retInfo->getValue("Model")));
	
	std::auto_ptr<IGetMediaProfiles> ap1(CFactoryImpl::getInstance().createGetMediaProfiles());
	CStringListRetInfo* retInfo12 = static_cast<CStringListRetInfo*>(ap1->getInfo(getMediaEndPoint(), securityInfo));
	std::auto_ptr<CStringListRetInfo> retInfo1(retInfo12);
	if (notifyErrorRetInfo(retInfo12)) {
		return;
	}
	for(std::list<std::string>::iterator iter = retInfo1->getInfos().begin(); iter != retInfo1->getInfos().end(); iter++) {
		m_ComboMediaProfiles.AddString(getCString(*iter));
	}
	if (m_ComboMediaProfiles.GetCount() > 0) {
		m_ComboMediaProfiles.SetCurSel(0);
	}

}

void COnvifClientDlg::OnDblclkListDevice() 
{
	int index = m_LBoxDevices.GetCurSel();
	if (index > -1) {
		clearDeviceText();
		CDevice* device = static_cast<CDevice*>(m_LBoxDevices.GetItemDataPtr(index));
		m_EdtEPAddress.SetWindowText(getCString(device->getEPAddress()));
		m_EdtServiceAddress.SetWindowText(getCString(device->getServiceAddress()));
		m_EdtType.SetWindowText(getCString(device->getType()));
		std::vector<std::string> scopes = device->getScopes();
		for (std::vector<std::string>::iterator iter = scopes.begin(); iter != scopes.end(); iter++) {
			m_LBoxScopes.AddString(getCString(*iter));
		}
	}
	
}

void COnvifClientDlg::OnBtnInfomediauri() 
{
	std::string serviceAddress = getMediaEndPoint();
	std::string profile = getWindowTextStr(m_ComboMediaProfiles);
	std::auto_ptr<IGetStreamUrl> ap(CFactoryImpl::getInstance().createGetStreamUrl());
	CBaseSoapSecurityInfo* securityInfo = getSoapSecurityInfo();
	std::auto_ptr<CBaseSoapSecurityInfo> securityInfoAp(securityInfo);
	CStringRetInfo* retInfo11 = static_cast<CStringRetInfo*>(ap->getInfo(serviceAddress, profile, securityInfo));	
	std::auto_ptr<CStringRetInfo>retInfo(retInfo11);
	if (notifyErrorRetInfo(retInfo11)) {
		return;
	}
	m_EdtMediaUrl.SetWindowText(getCString(retInfo->getInfo()));
}

void COnvifClientDlg::clearDeviceInformation()
{
	clearEdtText(m_EdtManufacture);
	clearEdtText(m_EdtModel);
	clearMediaInfo();
	
}

void COnvifClientDlg::clearMediaInfo()
{
	m_ComboMediaProfiles.ResetContent();
	clearEdtText(m_EdtMediaUrl);
}

std::string COnvifClientDlg::getServiceAddress()
{
	return getWindowTextStr(m_EdtServiceAddress);
}

std::string COnvifClientDlg::getWindowTextStr(CWnd& wnd)
{
	CString sp;
	wnd.GetWindowText(sp);
	return (getSTDStr(sp));
}

BOOL COnvifClientDlg::DestroyWindow() 
{
	// TODO: Add your specialized code here and/or call the base class
	clearListBoxDevices();
	return CDialog::DestroyWindow();
}

void COnvifClientDlg::OnBtnProbe() 
{
	// TODO: Add your control notification handler code here
	
}
