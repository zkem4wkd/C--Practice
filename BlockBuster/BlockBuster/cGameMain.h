#pragma once
#include "Define.h"

class cBall;

class cGameMain
{
private:
	cBall *pBall = NULL;
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	cGameMain();
	~cGameMain();
};

