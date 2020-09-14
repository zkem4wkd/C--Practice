#pragma once
#include "Define.h"
class cBall
{
private:
	BALL tInfo; // 구조체 x , y 좌표
public:
	void KeyInput();
public:
	void Initialize(); // 시작함수
	void Progress(); // 로직함수
	void Render(); // 그리는 함수
	void Release(); // 종료처리 함수
public:
	void gotoxy(int x, int y);
public:
	cBall();
	~cBall();
};



