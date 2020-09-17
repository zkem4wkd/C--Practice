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
		m_pMonster = new CMonster;		
		tMonster.strName = "�ʺ���";
		tMonster.iHp = 30;
		tMonster.iAttack = 3;
		m_pMonster->SetMonster(tMonster);
		break;
	case 2:
		//�߼����� ����
		m_pMonster = new CMonster;		
		tMonster.strName = "�߼���";
		tMonster.iHp = 60;
		tMonster.iAttack = 6;
		m_pMonster->SetMonster(tMonster);
		break;
	case 3:
		//������� ����
		m_pMonster = new CMonster;		
		tMonster.strName = "�����";
		tMonster.iHp = 90;
		tMonster.iAttack = 9;
		m_pMonster->SetMonster(tMonster);
		break;
	}


}

void CField::Fight()
{
	//���� �ǽ��غ��� 
	//�ο����غ���
	m_pPlayer->Render();
	m_pMonster->Render();
	system("pause");
}

CField::CField()
{
}

CField::~CField()
{
}
