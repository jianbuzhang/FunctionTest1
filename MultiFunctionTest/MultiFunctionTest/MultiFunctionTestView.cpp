
// MultiFunctionTestView.cpp : CMultiFunctionTestView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MultiFunctionTest.h"
#endif

#include "MultiFunctionTestDoc.h"
#include "MultiFunctionTestView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMultiFunctionTestView

IMPLEMENT_DYNCREATE(CMultiFunctionTestView, CView)

BEGIN_MESSAGE_MAP(CMultiFunctionTestView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CMultiFunctionTestView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CMultiFunctionTestView ����/����

CMultiFunctionTestView::CMultiFunctionTestView()
{
	// TODO: �ڴ˴���ӹ������

}

CMultiFunctionTestView::~CMultiFunctionTestView()
{
}

BOOL CMultiFunctionTestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMultiFunctionTestView ����

void CMultiFunctionTestView::OnDraw(CDC* /*pDC*/)
{
	CMultiFunctionTestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMultiFunctionTestView ��ӡ


void CMultiFunctionTestView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CMultiFunctionTestView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMultiFunctionTestView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMultiFunctionTestView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}

void CMultiFunctionTestView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMultiFunctionTestView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMultiFunctionTestView ���

#ifdef _DEBUG
void CMultiFunctionTestView::AssertValid() const
{
	CView::AssertValid();
}

void CMultiFunctionTestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMultiFunctionTestDoc* CMultiFunctionTestView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMultiFunctionTestDoc)));
	return (CMultiFunctionTestDoc*)m_pDocument;
}
#endif //_DEBUG


// CMultiFunctionTestView ��Ϣ�������
