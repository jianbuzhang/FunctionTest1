
// MultiFunctionTestDoc.cpp : CMultiFunctionTestDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MultiFunctionTest.h"
#endif

#include "MultiFunctionTestDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMultiFunctionTestDoc

IMPLEMENT_DYNCREATE(CMultiFunctionTestDoc, CDocument)

BEGIN_MESSAGE_MAP(CMultiFunctionTestDoc, CDocument)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CMultiFunctionTestDoc, CDocument)
END_DISPATCH_MAP()

// ע��: ��������˶� IID_IMultiFunctionTest ��֧��
//  ��֧������ VBA �����Ͱ�ȫ�󶨡�  �� IID ����ͬ���ӵ� .IDL �ļ��е�
//  ���Ƚӿڵ� GUID ƥ�䡣

// {2D807FD3-7B34-49B3-A70D-2A1116B121EB}
static const IID IID_IMultiFunctionTest =
{ 0x2D807FD3, 0x7B34, 0x49B3, { 0xA7, 0xD, 0x2A, 0x11, 0x16, 0xB1, 0x21, 0xEB } };

BEGIN_INTERFACE_MAP(CMultiFunctionTestDoc, CDocument)
	INTERFACE_PART(CMultiFunctionTestDoc, IID_IMultiFunctionTest, Dispatch)
END_INTERFACE_MAP()


// CMultiFunctionTestDoc ����/����

CMultiFunctionTestDoc::CMultiFunctionTestDoc()
{
	// TODO: �ڴ����һ���Թ������

	EnableAutomation();

	AfxOleLockApp();
}

CMultiFunctionTestDoc::~CMultiFunctionTestDoc()
{
	AfxOleUnlockApp();
}

BOOL CMultiFunctionTestDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CMultiFunctionTestDoc ���л�

void CMultiFunctionTestDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CMultiFunctionTestDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// ������������֧��
void CMultiFunctionTestDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CMultiFunctionTestDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CMultiFunctionTestDoc ���

#ifdef _DEBUG
void CMultiFunctionTestDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMultiFunctionTestDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMultiFunctionTestDoc ����
