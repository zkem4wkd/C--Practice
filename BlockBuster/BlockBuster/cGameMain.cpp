#include "cGameMain.h"
#include "cBall.h"

void cGameMain::Initialize()
{
	if (pBall == NULL)
	{
		pBall = new cBall;
		pBall->Initialize();
	}
}

void cGameMain::Progress()
{
	pBall->Progress();
}

void cGameMain::Render()
{
	pBall->Render();
}

void cGameMain::Release()
{
	delete pBall;
}

cGameMain::cGameMain()
{
}

cGameMain::~cGameMain()
{
}
