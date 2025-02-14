#include "CMainGame.h"
#include "CBar.h"
#include "CBall.h"
#include "cBlock.h"
void CMainGame::Initialize()
{
	/*if (m_pBar == NULL)
	{
		m_pBar = new CBar;
		m_pBar->Initialize();
	}*/

	if (m_pBall == NULL)
	{
		m_pBall = new CBall;
		m_pBall->Initialize();
	}

	if (m_pBlock == NULL)
	{
		m_pBlock = new cBlock;
		m_pBlock->Initialize();
	}
}

void CMainGame::Progress()
{
	m_pBall->Progress();
	//m_pBar->Progress(m_pBall);
	m_pBlock->Progress();
}

void CMainGame::Render()
{
	system("cls");
	m_pBall->Render();
	//m_pBar->Render();
	m_pBlock->Render();
}

void CMainGame::Release()
{
	//delete m_pBar;
	delete m_pBall;
	delete m_pBlock;
}

CMainGame::CMainGame()
{
}

CMainGame::~CMainGame()
{
}
