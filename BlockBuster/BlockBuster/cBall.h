#pragma once
#include "Define.h"
class cBall
{
private:
	INFO tInfo; // ����ü x , y ��ǥ
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

