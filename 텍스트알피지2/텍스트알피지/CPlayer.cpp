#include "CPlayer.h"
CPlayer::CPlayer()
{
	//�ʱ�ȭ
	//string�κ��� ������ �ɼ��ִ�. c�Լ���
	//memset(&m_tInfo, 0, sizeof(INFO));
}

CPlayer::~CPlayer()
{
}


void CPlayer::SelectJob()
{
	cout << "������ �����ϼ���(1. ��� 2. ������ 3. ����) : ";

	int iInput = 0;

	cin >> iInput;

	switch (iInput)
	{
	case 1:
		m_tInfo.strName = "���";
		m_tInfo.iHp = 100;
		m_tInfo.iAttack = 10;
		break;
	case 2:
		m_tInfo.strName = "������";
		m_tInfo.iHp = 90;
		m_tInfo.iAttack = 12;
		break;
	case 3:
		m_tInfo.strName = "����";
		m_tInfo.iHp = 95;
		m_tInfo.iAttack = 13;
		break;
	}
}

void CPlayer::Render()
{
	cout << "==============================" << endl;
	cout << "���� �̸� : " << m_tInfo.strName << endl;
	cout << "ü�� : " << m_tInfo.iHp << "\t���ݷ� : "
		<< m_tInfo.iAttack << endl;
}


