#include "cMonster.h"

void cMonster::Render()
{
	cout << "Moster : " << m_tMonster.strName << endl;
	cout << "Hp : " << m_tMonster.iHp << "\tAttack : " << m_tMonster.iAttack << endl;

}

cMonster::cMonster()
{
}

cMonster::~cMonster()
{
}
