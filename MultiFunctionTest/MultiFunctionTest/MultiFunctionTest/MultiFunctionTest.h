
// MultiFunctionTest.h : MultiFunctionTest Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMultiFunctionTestApp:
// �йش����ʵ�֣������ MultiFunctionTest.cpp
//

class CMultiFunctionTestApp : public CWinApp
{
public:
	CMultiFunctionTestApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	COleTemplateServer m_server;
		// �����ĵ������ķ���������
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMultiFunctionTestApp theApp;
