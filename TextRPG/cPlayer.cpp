#include "cPlayer.h"

cPlayer::cPlayer()
{
	//구조체 초기화
	//String 부분 문제
	//memset(&m_tInfo, 0, sizeof(INFO));
}

cPlayer::~cPlayer()
{
}


void cPlayer::SelectJob()
{
	cout << "1. Knight 2. Magician 3. Thief " << endl;
	cout << "Select your job : ";

	int iInput = 0;
	cin >> iInput;

	switch (iInput)
	{
	case 1:
		m_tInfo.strName = "Knight";
		m_tInfo.iHp = 100;
		m_tInfo.iAttack = 10;
		break;
	case 2:
		m_tInfo.strName = "Magician";
		m_tInfo.iHp = 70;
		m_tInfo.iAttack = 15;
		break;
	case 3:
		m_tInfo.strName = "Thief";
		m_tInfo.iHp = 85;
		m_tInfo.iAttack = 12;
		break;
	}

}

void cPlayer::Render()
{
	cout << "Your job : " << m_tInfo.strName << endl;
	cout << "Hp : " << m_tInfo.iHp << "\tAttack : " << m_tInfo.iAttack << endl;
}

