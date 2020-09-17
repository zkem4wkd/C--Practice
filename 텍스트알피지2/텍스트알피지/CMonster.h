#pragma once
#include "define.h"
class CMonster
{
private:
	INFO m_tMonster;
public:
	void SetMonster(INFO tMonster) 
	{
		m_tMonster = tMonster;
	}
	void SetDamage(int iAttack) { m_tMonster.iHp -= iAttack; }
	INFO GetMonster() { return m_tMonster; }
	void Render();
public:
	CMonster();
	~CMonster();
};

