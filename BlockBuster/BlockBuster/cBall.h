#pragma once
#include "Define.h"
class cBall
{
private:
	BALL tInfo; // ����ü x , y ��ǥ
public:
	void KeyInput();
public:
	void Initialize(); // �����Լ�
	void Progress(); // �����Լ�
	void Render(); // �׸��� �Լ�
	void Release(); // ����ó�� �Լ�
public:
	void gotoxy(int x, int y);
public:
	cBall();
	~cBall();
};



