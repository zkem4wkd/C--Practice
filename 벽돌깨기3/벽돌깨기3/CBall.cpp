#include "CBall.h"

void CBall::ScreenLine()
{
}

int CBall::Collision(int x, int y)
{
	if (y == 0)
	{
		m_tBall.nDirect = g_WallCollision[0][m_tBall.nDirect];
		return 1;// πÊ«‚¿Ã πŸ≤Ò
	}

	if (x == 1)
	{
		m_tBall.nDirect = g_WallCollision[1][m_tBall.nDirect];
		return 1;
	}

	if (x == 77)
	{
		m_tBall.nDirect = g_WallCollision[2][m_tBall.nDirect];
		return 1;
	}

	if (x == 23)
	{
		m_tBall.nDirect = g_WallCollision[3][m_tBall.nDirect];
		return 1;
	}

	return 0; //πÊ«‚¿Ã æ»πŸ≤Ò
}

void CBall::KeyInput()
{
	int nKey;
	if (_kbhit())
	{
		nKey = _getch();

		switch (nKey)
		{
		case '0':
			m_tBall.nDirect = 0;
			m_tBall.nX = 30;
			m_tBall.nY = 10;
			break;
		case '1':
			m_tBall.nDirect = 1;
			m_tBall.nX = 30;
			m_tBall.nY = 10;
			break;
		case '2':
			m_tBall.nDirect = 2;
			m_tBall.nX = 30;
			m_tBall.nY = 10;
			break;
		case '3':
			m_tBall.nDirect = 3;
			m_tBall.nX = 30;
			m_tBall.nY = 10;
			break;
		case '4':
			m_tBall.nDirect = 4;
			m_tBall.nX = 30;
			m_tBall.nY = 10;
			break;
		case '5':
			m_tBall.nDirect = 5;
			m_tBall.nX = 30;
			m_tBall.nY = 10;
			break;
		case 'f':
			m_tBall.nReady = 0;
			break;
		case 'r':
			m_tBall.nReady = 6;
			break;
		}
	}
}

void CBall::Initialize()
{
	m_tBall.nReady = 1;
	m_tBall.nDirect = 0;
	m_tBall.nX = 20;
	m_tBall.nY = 1;
}

void CBall::Progress()
{
	int n_key;

	if (m_tBall.nReady == 0)
	{
		switch (m_tBall.nDirect)
		{
		case 0:
			if (Collision(m_tBall.nX, m_tBall.nY-1) == 0) // æ»πŸ≤Ò
				m_tBall.nY--;
			break;
		case 1:
			if (Collision(m_tBall.nX+1, m_tBall.nY-1) == 0)
			{
				m_tBall.nX++;
				m_tBall.nY--;
			}
			break;
		case 2:
			if (Collision(m_tBall.nX, m_tBall.nY+1) == 0)
			{
				m_tBall.nX++;
				m_tBall.nY++;
			}
			break;
		case 3:
			if (Collision(m_tBall.nX-1, m_tBall.nY+1) == 0)
			{
				m_tBall.nY++;
			}
			break;
		case 4:
			if (Collision(m_tBall.nX-1, m_tBall.nY+1) == 0)
			{
				m_tBall.nX--;
				m_tBall.nY++;
			}
			break;
		case 5:
			if (Collision(m_tBall.nX-1, m_tBall.nY-1) == 0)
			{
				m_tBall.nX--;
				m_tBall.nY--;
			}
			break;
		}
	}

}

void CBall::Render()
{
	system("cls");
	gotoxy(m_tBall.nX, m_tBall.nY);
	cout << "°‹";
}

void CBall::Release()
{
}

CBall::CBall()
{
}

CBall::~CBall()
{
}
