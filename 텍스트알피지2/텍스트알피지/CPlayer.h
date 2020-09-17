#pragma once

#include "define.h"
class CPlayer
{
private:
	INFO m_tInfo;
public:
	//데미지함수
	//구조체정보를 얻어오는 함수
	//HP값을 넣어주는 함수
	void SetDamage(int iAttack){m_tInfo.iHp -= iAttack;}
	INFO GetInfo()
	{
		return m_tInfo;
	}
	void SetHp(int iHp) { m_tInfo.iHp = iHp; }
public:
	void SelectJob();
	void Render();
public:
	CPlayer();
	~CPlayer();
};

