//////////////////////////////////////////////////////////////////////////////
// Project...: drax
// File......: MainFrame.h
// Date......: 21.11.2008
// Author....: Stephan Arlt
//////////////////////////////////////////////////////////////////////////////

#pragma once

class CMainFrame : public CMDIFrameWndEx
{
public:
	CMainFrame();
	virtual ~CMainFrame();

protected:
	CMFCMenuBar m_wndMenuBar;
	CMFCToolBar m_wndToolBar;
	CMFCStatusBar m_wndStatusBar;

protected:
	//////////////////////////////////////////////////////////////////////////////
	// helper
	//////////////////////////////////////////////////////////////////////////////

	BOOL IsEdit(CWnd *ppWnd);
	void OnUpdateToClip(CCmdUI *ppkCmdUI);
	void OnUpdateFromClip(CCmdUI *ppkCmdUI);

	//////////////////////////////////////////////////////////////////////////////
	// messages
	//////////////////////////////////////////////////////////////////////////////

	afx_msg int OnCreate(LPCREATESTRUCT pptCreateStruct);
	afx_msg void OnClose();
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);

	afx_msg void OnEditCut();
	afx_msg void OnEditCopy();
	afx_msg void OnEditPaste();
	DECLARE_MESSAGE_MAP()
};
