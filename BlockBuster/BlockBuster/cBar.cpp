#include "cBar.h"

void cBar::Initialize()
{
	m_tBar.nX[0] = 12;
	m_tBar.nX[1] = 14;
	m_tBar.nX[2] = 16;
	m_tBar.nY = 16;
}

void cBar::Progress()
{
	int nKey = 0;

	if (_kbhit())
	{
		nKey = _getch();

		switch (nKey)
		{
		case 75:
			m_tBar.nX[0]--;
			m_tBar.nX[1]--;
			m_tBar.nX[2]--;
			break;
		case 77:
			m_tBar.nX[0]++;
			m_tBar.nX[1]++;
			m_tBar.nX[2]++;
			break;
		}
	}
}

void cBar::Render()
{
	for (int i = 0; i < 3; i++)
	{
		gotoxy(m_tBar.nX[i], m_tBar.nY);
		cout << "¢Ì";
	}
}

void cBar::Release()
{
}

void cBar::gotoxy(int x, int y)
{
	COORD CursorPosition = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
}

cBar::cBar()
{
}

cBar::~cBar()
{
}
