
// PenPaperUninstall64.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CPenPaperUninstall64App:
// See PenPaperUninstall64.cpp for the implementation of this class
//

class CPenPaperUninstall64App : public CWinApp
{
public:
	CPenPaperUninstall64App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CPenPaperUninstall64App theApp;