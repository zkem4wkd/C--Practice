#include "CMonster.h"

void CMonster::Render()
{
	cout << "==============================" << endl;
	cout << "직업 이름 : " << m_tMonster.strName << endl;
	cout << "체력 : " << m_tMonster.iHp << "\t공격력 : "
		 << m_tMonster.iAttack << endl;
}

CMonster::CMonster()
{
}

CMonster::~CMonster()
{
}
