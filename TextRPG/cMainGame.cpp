#include "cMainGame.h"

void cMainGame::Initialize()
{
	if (m_pPlayer == NULL)
	{
		m_pPlayer = new cPlayer;
		m_pPlayer->SelectJob();
	}
}

void cMainGame::Progress()
{
	int iInput = 0;

	while (true)
	{
		system("cls");
		m_pPlayer->Render(); //�÷��̾� ����
		cout << "1. Quest 2. Exit " << endl;
		cout << " ";
		cin >> iInput;

		//����Ʈ Ŭ����
		if (iInput == 1)
		{
			if (m_pField == NULL)
			{
				m_pField = new cField;
				m_pField->setPlayer(m_pPlayer);
			}
			m_pField->Progress();
		}


		//����
		if (iInput == 2)
		{
			cout << "Game End" << endl;
			break;
		}

	}
}

cMainGame::cMainGame()
{
}

cMainGame::~cMainGame()
{
}
