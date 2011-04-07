//////////////////////////////////////////////////////////////////////////////
// Project...: drax
// File......: InformationView.h
// Date......: 11/24/2008
// Author....: Stephan Arlt
//////////////////////////////////////////////////////////////////////////////

#pragma once

#include "MovieDoc.h"

class CInformationView : public CView
{
public:
	CInformationView();
	virtual ~CInformationView();
	DECLARE_DYNCREATE(CInformationView)

	//////////////////////////////////////////////////////////////////////////////
	// getter
	//////////////////////////////////////////////////////////////////////////////

	CMovieDoc* GetDocument() const {
		return dynamic_cast<CMovieDoc*>(CView::GetDocument());
	}

	//////////////////////////////////////////////////////////////////////////////
	// overridings
	//////////////////////////////////////////////////////////////////////////////

	void OnInitialUpdate();

protected:
	CMFCPropertyGridCtrl m_wndProperties;

protected:
	//////////////////////////////////////////////////////////////////////////////
	// messages
	//////////////////////////////////////////////////////////////////////////////

	afx_msg void OnDraw(CDC *ppkDC);
	afx_msg LRESULT OnPropertyChanged(WPARAM plWParam, LPARAM plLParam);
	afx_msg void OnSize(UINT piType, int piX, int piY);
	DECLARE_MESSAGE_MAP()
};
