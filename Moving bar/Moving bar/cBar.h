#pragma once
#include "define.h"
class cBall;
class cBar
{
private:
	BAR m_tBar;
	int m_nCatch;
public:
	void Initialize();
	void Progress(cBall* pBall);
	void Render();
	void Release();
public:
	cBar();
	~cBar();
};

