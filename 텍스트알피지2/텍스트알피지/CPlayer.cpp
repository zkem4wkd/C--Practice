#include "CPlayer.h"
CPlayer::CPlayer()
{
	//초기화
	//string부분이 문제가 될수있다. c함수라서
	//memset(&m_tInfo, 0, sizeof(INFO));
}

CPlayer::~CPlayer()
{
}


void CPlayer::SelectJob()
{
	cout << "직업을 선택하세요(1. 기사 2. 마법사 3. 도둑) : ";

	int iInput = 0;

	cin >> iInput;

	switch (iInput)
	{
	case 1:
		m_tInfo.strName = "기사";
		m_tInfo.iHp = 100;
		m_tInfo.iAttack = 10;
		break;
	case 2:
		m_tInfo.strName = "마법사";
		m_tInfo.iHp = 90;
		m_tInfo.iAttack = 12;
		break;
	case 3:
		m_tInfo.strName = "도둑";
		m_tInfo.iHp = 95;
		m_tInfo.iAttack = 13;
		break;
	}
}

void CPlayer::Render()
{
	cout << "==============================" << endl;
	cout << "직업 이름 : " << m_tInfo.strName << endl;
	cout << "체력 : " << m_tInfo.iHp << "\t공격력 : "
		<< m_tInfo.iAttack << endl;
}


