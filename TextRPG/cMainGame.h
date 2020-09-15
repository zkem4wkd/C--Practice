#pragma once
#include "define.h"
#include "cPlayer.h"
#include "cField.h"

class cPlayer;
class cField;
class cMainGame
{
private:
	cPlayer* m_pPlayer = NULL;
	cField* m_pField = NULL;
public:
	void Initialize();
	void Progress();
public:
	cMainGame();
	~cMainGame();

};

