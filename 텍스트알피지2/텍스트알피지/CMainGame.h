#pragma once
#include "define.h"
class CPlayer;
class CField;
class CMainGame
{
private:
	CPlayer* m_pPlayer=NULL;
	CField* m_pField=NULL;
public:
	void Initialize();
	void Progress();
public:
	CMainGame();
	~CMainGame();
};

