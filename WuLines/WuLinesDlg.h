// WuLinesDlg.h : header file
//

#if !defined(AFX_WULINESDLG_H__90BA621D_35D2_459A_BF54_35B1BBD44644__INCLUDED_)
#define AFX_WULINESDLG_H__90BA621D_35D2_459A_BF54_35B1BBD44644__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CWuLinesDlg dialog

class CWuLinesDlg : public CDialog
{
// Construction
public:
	CWuLinesDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CWuLinesDlg)
	enum { IDD = IDD_WULINES_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWuLinesDlg)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CWuLinesDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

	bool m_bStop;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WULINESDLG_H__90BA621D_35D2_459A_BF54_35B1BBD44644__INCLUDED_)
