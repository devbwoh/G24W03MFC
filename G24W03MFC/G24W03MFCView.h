
// G24W03MFCView.h: CG24W03MFCView 클래스의 인터페이스
//

#pragma once

// 마우스 오른쪽 버튼 클릭 수를 보려면 아래 주석 해제
//#define SHOW_R_COUNT	

class CG24W03MFCView : public CView
{
#ifdef SHOW_R_COUNT
	int rCount = 0;
#endif

protected: // serialization에서만 만들어집니다.
	CG24W03MFCView() noexcept;
	DECLARE_DYNCREATE(CG24W03MFCView)

// 특성입니다.
public:
	CG24W03MFCDoc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~CG24W03MFCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // G24W03MFCView.cpp의 디버그 버전
inline CG24W03MFCDoc* CG24W03MFCView::GetDocument() const
   { return reinterpret_cast<CG24W03MFCDoc*>(m_pDocument); }
#endif

