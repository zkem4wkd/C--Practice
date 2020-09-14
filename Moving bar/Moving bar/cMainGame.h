#pragma once
#include "define.h"

class cBar;
class cBall;
class cMainGame
{
private:
	cBar* m_pBar = NULL;
	cBall* m_pBall = NULL;
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	cMainGame();
	~cMainGame();
};

