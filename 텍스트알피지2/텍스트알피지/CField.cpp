#include "CField.h"
#include "CPlayer.h"
#include "CMonster.h"
void CField::Progress()
{
	int iInput = 0;

	while (true)
	{
		system("cls");
		m_pPlayer->Render();
		DrawMap();
		cin >> iInput;
		if (iInput == 4)
			break;

		if (iInput <= 3)
		{
			//1번은 초보맵 ->초보몬스터
			//2번은 중수맵 ->중수몬스터
			//3번은 고수맵 ->고수몬스터
			CreateMonster(iInput);
			Fight();
		}


	}


}

void CField::DrawMap()
{
	cout << "1.초보맵" << endl;
	cout << "2.중수맵" << endl;
	cout << "3.고수맵" << endl;
	cout << "4.전단계" << endl;
	cout << "=======================" << endl;
	cout << "맵을 선택하세요 : ";
}

void CField::CreateMonster(int input)
{
	INFO tMonster = { "" };
	switch (input)
	{
	case 1:
		//초보몬스터 생성
		m_pMonster = new CMonster;		
		tMonster.strName = "초보몹";
		tMonster.iHp = 30;
		tMonster.iAttack = 3;
		m_pMonster->SetMonster(tMonster);
		break;
	case 2:
		//중수몬스터 생성
		m_pMonster = new CMonster;		
		tMonster.strName = "중수몹";
		tMonster.iHp = 60;
		tMonster.iAttack = 6;
		m_pMonster->SetMonster(tMonster);
		break;
	case 3:
		//고수몬스터 생성
		m_pMonster = new CMonster;		
		tMonster.strName = "고수몹";
		tMonster.iHp = 90;
		tMonster.iAttack = 9;
		m_pMonster->SetMonster(tMonster);
		break;
	}


}

void CField::Fight()
{
	//오늘 실습해보기 
	//싸움구현해보기
	m_pPlayer->Render();
	m_pMonster->Render();
	system("pause");
}

CField::CField()
{
}

CField::~CField()
{
}
