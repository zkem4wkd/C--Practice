#include "Define.h"
#include "cBall.h"
#include "cGameMain.h"

//GameMain 안에서 Ball 오브젝트 관리


int main()
{
	//cBall b;
	/*cBall* b = new cBall;

	b->Initialize();

	while (true)
	{
		b->Progress();
		b->Render();
	}

	b->Release();

	delete b;*/
	cGameMain Game;

	int Current = GetTickCount();

	Game.Initialize();

	while (true)
	{
		if (Current + 100 < GetTickCount())
		{
			Current = GetTickCount();

			Game.Progress();
			Game.Render();

		}
	}
	Game.Release();

	return 0;
}