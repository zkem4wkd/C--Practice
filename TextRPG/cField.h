#pragma once
#include "define.h"

class cPlayer;
class cMonster;
class cField
{
private:
	cPlayer* m_pPlayer = NULL;
	cMonster* m_pMonster = NULL;
public:
	void Progress();
	void DrawMap();
	void CreateMonster(int input);
	void Fight();
public:
	void setPlayer(cPlayer* pPlayer)
	{
		m_pPlayer = pPlayer;
	}
public:
	cField();
	~cField();
};

