#include "CMonster.h"

void CMonster::Render()
{
	cout << "==============================" << endl;
	cout << "���� �̸� : " << m_tMonster.strName << endl;
	cout << "ü�� : " << m_tMonster.iHp << "\t���ݷ� : "
		 << m_tMonster.iAttack << endl;
}

CMonster::CMonster()
{
}

CMonster::~CMonster()
{
}
