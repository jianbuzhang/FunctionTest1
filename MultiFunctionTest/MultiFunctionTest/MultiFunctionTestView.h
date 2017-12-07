
// MultiFunctionTestView.h : CMultiFunctionTestView ��Ľӿ�
//

#pragma once


class CMultiFunctionTestView : public CView
{
protected: // �������л�����
	CMultiFunctionTestView();
	DECLARE_DYNCREATE(CMultiFunctionTestView)

// ����
public:
	CMultiFunctionTestDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMultiFunctionTestView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MultiFunctionTestView.cpp �еĵ��԰汾
inline CMultiFunctionTestDoc* CMultiFunctionTestView::GetDocument() const
   { return reinterpret_cast<CMultiFunctionTestDoc*>(m_pDocument); }
#endif

