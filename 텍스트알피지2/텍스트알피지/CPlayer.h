#pragma once

#include "define.h"
class CPlayer
{
private:
	INFO m_tInfo;
public:
	//�������Լ�
	//����ü������ ������ �Լ�
	//HP���� �־��ִ� �Լ�
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

