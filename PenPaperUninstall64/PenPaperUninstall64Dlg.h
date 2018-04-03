
// PenPaperUninstall64Dlg.h : header file
//

#pragma once


// CPenPaperUninstall64Dlg dialog
class CPenPaperUninstall64Dlg : public CDialogEx
{
// Construction
public:
	CPenPaperUninstall64Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PENPAPERUNINSTALL64_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
