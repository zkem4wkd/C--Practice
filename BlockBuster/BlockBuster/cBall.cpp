#include "cBall.h"

void cBall::Initialize()
{
	tInfo.m_nX = 0;
	tInfo.m_nY = 0;
}

void cBall::Progress()
{
	tInfo.m_nX += tInfo.X;
	tInfo.m_nY += tInfo.Y;
	
	if (tInfo.m_nX == 0)
		tInfo.X = 1;
	
	if (tInfo.m_nX == 80)
		tInfo.X = -1;
	
	if (tInfo.m_nY == 0)
		tInfo.Y = 1;
	
	if (tInfo.m_nY == 30)
		tInfo.Y = -1;
	

}

void cBall::Render()
{
	system("cls");
	gotoxy(tInfo.m_nX,tInfo.m_nY);
	cout << "¡Ü";
}

void cBall::Release()
{
}

void cBall::gotoxy(int x, int y)
{
	COORD CursorPosition = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
}

cBall::cBall()
{

}

cBall::~cBall()
{
}
