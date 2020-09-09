#include "MainMenu.h"
#include <iostream>
#include <windows.h>

using namespace std;

void MainMenu::Main()
{
	while (true)
	{
		MainMenu m;
		cout << "명일방주 메인화면 입니다." << endl;
		cout << "1.작전" << endl;
		cout << "2.편성" << endl;
		cout << "3.오퍼레이터(캐릭터 관리)" << endl;
		cout << "4.공개모집" << endl;
		cout << "5.헤드헌팅" << endl;
		cout << "6.임무" << endl;
		cout << "7.창고" << endl;
		int i;
		cin >> i;

		switch (i)
		{
		case 1:
			system("cls");
			m.Operation();
			system("cls");
			continue;
		case 2:
			system("cls");
			m.Group();
			continue;
		case 3:
			system("cls");
			m.Operator();
			continue;
		case 4:
			system("cls");
			m.OpenGotcha();
			continue;
		case 5:
			system("cls");
			m.HeadHunting();
			continue;
		case 6:
			system("cls");
			m.Mission();
			continue;
		case 7:
			system("cls");
			m.Inventory();
			Sleep(1000);
			system("cls");
			continue;
		default:
			cout << "Command Error" << endl;
			continue;
		}
	}
}
int i;
void MainMenu::Operation()
{
	cout << "작전 화면 입니다. " << endl;
	cout << "1.작전 시작 " << endl;
	cout << "2.뒤로가기 " << endl;
	cin >> i;
	switch (i)
	{
	case 1:
		cout << "미구현" <<endl;
		Sleep(1000);
		system("cls");
		break;
	default :
		system("cls");
		break;
	}

}
void MainMenu::Group()
{
	cout << "그룹 편성 입니다. " << endl;
	cout << "1.그룹 편성하기 " << endl;
	cout << "2.뒤로가기 " << endl;
	cin >> i;
	switch (i)
	{
	case 1:
		cout << "미구현" << endl;
		Sleep(1000);
		system("cls");
		break;
	default:
		system("cls");
		break;
	}
}
void MainMenu::Operator()
{
	cout << "오퍼레이터 관리 입니다. " << endl;
	cout << "1.오퍼레이터 관리 " << endl;
	cout << "2.뒤로가기 " << endl;
	cin >> i;
	switch (i)
	{
	case 1:
		cout << "미구현" << endl;
		Sleep(1000);
		system("cls");
		break;
	default:
		system("cls");
		break;
	}
}
void MainMenu::OpenGotcha()
{
	cout << "공개모집 화면 입니다. " << endl;
	cout << "1.공개모집 시작  " << endl;
	cout << "2.뒤로가기 " << endl;
	cin >> i;
	switch (i)
	{
	case 1:
		cout << "미구현" << endl;
		Sleep(1000);
		system("cls");
		break;
	default:
		system("cls");
		break;
	}
}
void MainMenu::HeadHunting()
{
	cout << "헤드헌팅 화면 입니다. " << endl;
	cout << "1.헤드헌팅 시작 " << endl;
	cout << "2.뒤로가기 " << endl;
	cin >> i;
	switch (i)
	{
	case 1:
		cout << "미구현" << endl;
		Sleep(1000);
		system("cls");
		break;
	default:
		system("cls");
		break;
	}
}
void MainMenu::Mission()
{
	cout << "임무 화면 입니다. " << endl;
	cout << "1.임무 확인 " << endl;
	cout << "2.뒤로가기 " << endl;
	cin >> i;
	switch (i)
	{
	case 1:
		cout << "미구현" << endl;
		Sleep(1000);
		system("cls");
		break;
	default:
		system("cls");
		break;
	}
}
void MainMenu::Inventory()
{
	cout << "창고 입니다. " << endl;
}