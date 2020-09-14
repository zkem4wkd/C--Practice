#pragma once
#include "define.h"
class cBlock
{
private:
	BLOCK tBlock[50];
public:
	int Search(int nEnd, int nX, int nY);
	void setBlock(int nBlockCount);
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	cBlock();
	~cBlock();

};

