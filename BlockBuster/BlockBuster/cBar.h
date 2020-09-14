#pragma once
#include "Define.h"
class cBar
{
private:
	BAR m_tBar;
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	void gotoxy(int x, int y);
public:
	cBar();
	~cBar();

};

