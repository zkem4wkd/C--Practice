#pragma once
#include "define.h"
class CPlayer;
class CMonster;
class CField
{
private:
	CPlayer* m_pPlayer=NULL;
	CMonster* m_pMonster=NULL;
public:
	void Progress();
	void DrawMap();
	void CreateMonster(int input);
	void Fight();
public:
	void SetPlayer(CPlayer* pPlayer) 
	{ 
		m_pPlayer = pPlayer;
	}
public:
	CField();
	~CField();
};

