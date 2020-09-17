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
	CMonster* Create(string _strName, int _iHp, int _iAttack);
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

