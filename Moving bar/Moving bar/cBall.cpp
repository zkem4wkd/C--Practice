#include "cBall.h"

void cBall::Initialize()
{
	m_tBall.nX = 20;
	m_tBall.nY = 1;
}

void cBall::Progress()
{
	if (m_tBall.nReady == 0)
	{
		m_tBall.nY++;

		if (m_tBall.nY > 24)
		{
			m_tBall.nReady = 1;
			m_tBall.nX = 20;
			m_tBall.nY = 1;
		}
	}
}

void cBall::Render()
{
	system("cls");
	gotoxy(m_tBall.nX, m_tBall.nY);
	cout << "¡Ü";
}

void cBall::Release()
{
}

cBall::cBall()
{
}

cBall::~cBall()
{
}
