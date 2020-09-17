#include "CField.h"
#include "CPlayer.h"
#include "CMonster.h"
void CField::Progress()
{
	int iInput = 0;

	while (true)
	{
		system("cls");
		m_pPlayer->Render();
		DrawMap();
		cin >> iInput;
		if (iInput == 4)
			break;

		if (iInput <= 3)
		{
			//1���� �ʺ��� ->�ʺ�����
			//2���� �߼��� ->�߼�����
			//3���� ����� ->�������
			CreateMonster(iInput);
			Fight();
		}


	}


}

void CField::DrawMap()
{
	cout << "1.�ʺ���" << endl;
	cout << "2.�߼���" << endl;
	cout << "3.�����" << endl;
	cout << "4.���ܰ�" << endl;
	cout << "=======================" << endl;
	cout << "���� �����ϼ��� : ";
}

void CField::CreateMonster(int input)
{
	INFO tMonster = { "" };
	switch (input)
	{
	case 1:
		//�ʺ����� ����
		m_pMonster = Create("�ʺ���", 30, 3);
		break;
	case 2:
		//�߼����� ����
		m_pMonster = Create("�߼���", 50, 5);
		break;
	case 3:
		//������� ����
		m_pMonster = Create("�����", 70, 7);
		break;
	}


}
//���丮 �޼��� ���� ����
CMonster* CField::Create(string _strName, int _iHp, int _iAttack)
{
	CMonster* pMonster = new CMonster;

	INFO tMonster = { "" };
	tMonster.strName = _strName;
	tMonster.iHp = _iHp;
	tMonster.iAttack = _iAttack;
	pMonster->SetMonster(tMonster);
	return pMonster;
}

void CField::Fight()
{
	int iInput = 0;

	while (true)
	{
		system("cls");
		m_pPlayer->Render();
		m_pMonster->Render();
		
		cout << "1. ���� 2. ���� : ";
		cin >> iInput;

		if (iInput == 1)
		{
			m_pPlayer->SetDamage(m_pMonster->GetMonster().iAttack);
			m_pPlayer->SetDamage(m_pPlayer->GetInfo().iAttack);

		}
		if (m_pPlayer->GetInfo().iHp <= 0)
		{
			m_pPlayer->SetHp(100);
			break;
		}

		if (iInput == 2 || m_pMonster->GetMonster().iHp <= 0)
		{
			delete m_pMonster;
			m_pMonster = NULL; // Ȥ�� �� ������ ����� �ʱ�ȭ

			break;
		}
	}



}

CField::CField()
{
}

CField::~CField()
{
}
