#pragma once

// CSocCom ��� ����Դϴ�.

class CSocCom : public CSocket
{
public:
	CSocCom();
	virtual ~CSocCom();
	HWND m_hWnd;
	void Init(HWND hWnd);
	virtual void OnReceive(int nErrorCode);
};


