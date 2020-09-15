#pragma once
#include "define.h"
class cMonster
{
private:
	INFO m_tMonster;
public:
	void Render();
	void setMonster(INFO tMonster) { m_tMonster = tMonster; }
public:
	cMonster();
	~cMonster();
};

