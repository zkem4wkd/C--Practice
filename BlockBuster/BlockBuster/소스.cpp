#include "Define.h"
#include "cBall.h"
#include "cGameMain.h"

//GameMain �ȿ��� Ball ������Ʈ ����


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