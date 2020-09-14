#pragma once
#include "define.h"
class CBar;
class CBall;
class cBlock;
class CMainGame
{
private:
	CBar* m_pBar = NULL;
	CBall* m_pBall = NULL;
	cBlock* m_pBlock = NULL;
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	CMainGame();
	~CMainGame();
};

