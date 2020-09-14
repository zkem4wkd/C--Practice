#include "cBlock.h"


//�Լ��� �־��� ��ǥ�� ���� ������ ��� �迭 �߿� �ߺ��� �ִ��� �˻�
//nEnd = ����� ����
int cBlock::Search(int nEnd, int nX, int nY)
{
	for (int i = 0; i < nEnd; i++)
	{
		if (tBlock[i].nY == nY)
		{
			if (tBlock[i].nX == nX || (tBlock[i].nX + 1) == nX)
				return 1;
		}
	}

	return 0;
}

void cBlock::setBlock(int nBlockCount)
{
	int nX, nY;
	srand((unsigned int)clock());

	for (int i = 0; i < nBlockCount; i++)
	{
		tBlock[i].nLife = 1;

		while (true) //�ߺ�ã��
		{
			nX = rand() % 57 + 2;
			nY = rand() % 14 + 2;

			if (Search(i, nX, nY) == 0)
			{
				tBlock[i].nX = nX;
				tBlock[i].nY = nY;
				break;
			}
		}
	}
}

void cBlock::Initialize()
{
	memset(tBlock, 0, sizeof(tBlock));
	setBlock(10);
}

void cBlock::Progress()
{
}

void cBlock::Render()
{
	for (int i = 0; i < 10; i++)
	{
		gotoxy(tBlock[i].nX, tBlock[i].nY);
		printf("��");
	}
}

void cBlock::Release()
{
}

cBlock::cBlock()
{
}

cBlock::~cBlock()
{
}
