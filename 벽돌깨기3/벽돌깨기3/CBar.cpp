#include "CBar.h"
#include "CBall.h"

void CBar::Initialize()
{
	m_tBar.nY = 18;
	m_tBar.nX[0] = 12;
	m_tBar.nX[1] = 14;
	m_tBar.nX[2] = 16;

}

void CBar::Progress(CBall* pBall)
{
	int nKey = 0;

	if (_kbhit())
	{
		nKey = _getch();

		switch (nKey)
		{
		case LEFT:
			m_tBar.nX[0]--;
			m_tBar.nX[1]--;
			m_tBar.nX[2]--;
			//잡았을경우
			if (pBall->GetBall().nReady == 1 && m_nCatch == 1)
			{
				pBall->SetX(-1);
			}

			break;
		case RIGHT:
			m_tBar.nX[0]++;
			m_tBar.nX[1]++;
			m_tBar.nX[2]++;
			//잡았을경우
			if (pBall->GetBall().nReady == 1 && m_nCatch == 1)
			{
				pBall->SetX(1);
			}
			break;
		case 'a': //공출발
			pBall->SetReady(0);
			m_nCatch = 0;
			break;
		case 's': //공잡음
			if (pBall->GetBall().nX >= m_tBar.nX[0] &&
				pBall->GetBall().nX <= m_tBar.nX[2] + 1 &&
				pBall->GetBall().nY == (m_tBar.nY - 1))
			{
				pBall->SetReady(1);
				m_nCatch = 1;
			}
			break;
		}
	}



}

void CBar::Render()
{
	for (int i = 0; i < 3; i++)
	{
		gotoxy(m_tBar.nX[i], m_tBar.nY);
		cout << "▦";
	}
}

void CBar::Release()
{
}

CBar::CBar()
{
}

CBar::~CBar()
{
}
