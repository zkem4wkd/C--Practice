#pragma once
#include "Define.h"

class cBall;
class cBar;

class cGameMain
{
private:
	cBall *pBall = NULL;
	cBar* pBar = NULL;
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	cGameMain();
	~cGameMain();
};

