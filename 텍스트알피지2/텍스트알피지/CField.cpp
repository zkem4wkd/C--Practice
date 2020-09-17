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
		m_pMonster = Create("초보몹", 30, 3);
		break;
	case 2:
		//중수몬스터 생성
		m_pMonster = Create("중수몹", 50, 5);
		break;
	case 3:
		//고수몬스터 생성
		m_pMonster = Create("고수몹", 70, 7);
		break;
	}


}
//팩토리 메서드 패턴 형태
CMonster* CField::Create(string _strName, int _iHp, int _iAttack)
{
	CMonster* pMonster = new CMonster;

	INFO tMonster = { "" };
	tMonster.strName = _strName;
	tMonster.iHp = _iHp;
	tMonster.iAttack = _iAttack;
	pMonster->SetMonster(tMonster);
	return pMonster;
}

void CField::Fight()
{
	int iInput = 0;

	while (true)
	{
		system("cls");
		m_pPlayer->Render();
		m_pMonster->Render();
		
		cout << "1. 공격 2. 도망 : ";
		cin >> iInput;

		if (iInput == 1)
		{
			m_pPlayer->SetDamage(m_pMonster->GetMonster().iAttack);
			m_pPlayer->SetDamage(m_pPlayer->GetInfo().iAttack);

		}
		if (m_pPlayer->GetInfo().iHp <= 0)
		{
			m_pPlayer->SetHp(100);
			break;
		}

		if (iInput == 2 || m_pMonster->GetMonster().iHp <= 0)
		{
			delete m_pMonster;
			m_pMonster = NULL; // 혹시 모를 오류를 대비한 초기화

			break;
		}
	}



}

CField::CField()
{
}

CField::~CField()
{
}
