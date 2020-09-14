#include "cGameMain.h"
#include "cBall.h"
#include "cBar.h"

void cGameMain::Initialize()
{
	if (pBall == NULL)
	{
		pBall = new cBall;
		pBall->Initialize();
	}
	if (pBar == NULL)
	{
		pBar = new cBar;
	}
}

void cGameMain::Progress()
{
	pBall->Progress();
	pBar->Progress();
}

void cGameMain::Render()
{
	pBall->Render();
	pBar->Render();
}

void cGameMain::Release()
{
	delete pBall;
	delete pBar;
}

cGameMain::cGameMain()
{
}

cGameMain::~cGameMain()
{
}
