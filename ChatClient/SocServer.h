#pragma once
#include "SocCom.h"
// CSocServer ��� ����Դϴ�.

class CSocServer : public CSocket
{
public:
	CSocServer();
	virtual ~CSocServer();
	virtual void OnAccept(int nErrorCode);

	void Init(HWND hWnd);
	HWND m_hWnd; // ���� ������ �ڵ�
	CSocCom m_socCom; // ���� ��û�� ������ ������ ����
	
	CSocCom *GetAcceptSocCom();

};


