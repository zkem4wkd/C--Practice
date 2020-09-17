#include "CMainGame.h"
#include "CPlayer.h"
#include "CField.h"
void CMainGame::Initialize()
{
	if (m_pPlayer == NULL)
	{
		m_pPlayer = new CPlayer;
		m_pPlayer->SelectJob();
	}
}

void CMainGame::Progress()
{
	int iInput = 0;

	while (true)
	{
		system("cls");
		m_pPlayer->Render();//플레이어 정보 
		cout << "1. 사냥터 2. 종료 : ";
		cin >> iInput;

		//1사냥터 클래스
		if (iInput == 1)
		{
			if (m_pField == NULL)
			{
				m_pField = new CField;
				m_pField->SetPlayer(m_pPlayer);
			}
			m_pField->Progress();
		}

		if (iInput == 2)
		{
			break;
		}



	}

}

CMainGame::CMainGame()
{
}

CMainGame::~CMainGame()
{
}
