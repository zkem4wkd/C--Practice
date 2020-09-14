#pragma once
#include <windows.h>
#include <conio.h>
#include <cTime>
#include <iostream>
using namespace std;

#define LEFT 75
#define RIGHT 77


struct BAR
{
	int nX[3];
	int nY;
};


struct BALL
{
	int nReady;
	int nHp;
	int nDirect;
	int nX, nY;
};

static void gotoxy(int x, int y)
{
	COORD CursorPosition = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
}