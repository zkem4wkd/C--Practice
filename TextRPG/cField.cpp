#include "cField.h"
#include "cMainGame.h"
#include "cMonster.h"

void cField::Progress()
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
			CreateMonster(iInput);
		}
	}
}

void cField::DrawMap()
{
	cout << "1. Standard" << endl;
	cout << "2. Expert" << endl;
	cout << "3. Master" << endl;
	cout << "4. Exit" << endl;
	cout << "==================" << endl;
	cout << "Select Map : ";
}

void cField::CreateMonster(int input)
{
	INFO tMonster = { "" };
	switch (input)
	{
	case 1:
		m_pMonster = new cMonster;
		tMonster.strName = "Dog";
		tMonster.iHp = 30;
		tMonster.iAttack = 2;
		m_pMonster->setMonster(tMonster);
		Fight();
		break;
	case 2:
		m_pMonster = new cMonster;
		tMonster.strName = "Wolf";
		tMonster.iHp = 60;
		tMonster.iAttack = 5;
		m_pMonster->setMonster(tMonster);
		Fight();
		break;
	case 3:
		m_pMonster = new cMonster;
		tMonster.strName = "Bear";
		tMonster.iHp = 100;
		tMonster.iAttack = 10;
		m_pMonster->setMonster(tMonster);
		Fight();
		break;
	}
}

void cField::Fight()
{
	m_pPlayer->Render();
	m_pMonster->Render();
	system("pause");
}

cField::cField()
{
}

cField::~cField()
{
}
