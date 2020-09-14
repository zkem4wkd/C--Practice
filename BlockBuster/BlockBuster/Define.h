#pragma once
#include <iostream>
#include <windows.h>
#include <ctime>
#include <conio.h>


using namespace std;

//ÁÂÇ¥ »ç¿ë
//typedef struct _BALL
//{
//
//
//}INFO;
//struct INFO
//{
//	int m_nX = 0;
//	int m_nY = 0;
//	int X = 1;
//	int Y = 1;
//
//};

struct BALL
{
	int m_nReady;
	int m_nHp;
	int m_nX;
	int m_nY;
	int m_nDirect;
	int m_nSpeed;
};

struct BAR
{
	int nX[3];
	int nY;
};