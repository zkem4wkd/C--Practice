#include "cMainGame.h"
#include "cBar.h"
#include "cBall.h"

void cMainGame::Initialize()
{
	if (m_pBar == NULL)
	{
		m_pBar = new cBar;
		m_pBar->Initialize();
	}
	if (m_pBall == NULL)
	{
		m_pBall = new cBall;
		m_pBall->Initialize();

	}
}

void cMainGame::Progress()
{
	m_pBall->Progress();
	m_pBar->Progress(m_pBall);
}

void cMainGame::Render()
{
	m_pBall->Render();
	m_pBar->Render();
}

void cMainGame::Release()
{
	delete m_pBar;
	delete m_pBall;
}

cMainGame::cMainGame()
{
}

cMainGame::~cMainGame()
{
}
