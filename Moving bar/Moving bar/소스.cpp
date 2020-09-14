#include <iostream>
#include "define.h"
#include "cMainGame.h"

using namespace std;

int main()
{
	cMainGame Game;

	Game.Initialize();

	int Curr = GetTickCount();

	while (true)
		if (Curr + 50 < GetTickCount())
		{
			Curr = GetTickCount();
			Game.Progress();
			Game.Render();
		}
	Game.Release();

	return 0;
}