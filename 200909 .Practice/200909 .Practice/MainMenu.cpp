#include "MainMenu.h"
#include <iostream>
#include <windows.h>

using namespace std;

void MainMenu::Main()
{
	while (true)
	{
		MainMenu m;
		cout << "���Ϲ��� ����ȭ�� �Դϴ�." << endl;
		cout << "1.����" << endl;
		cout << "2.��" << endl;
		cout << "3.���۷�����(ĳ���� ����)" << endl;
		cout << "4.��������" << endl;
		cout << "5.�������" << endl;
		cout << "6.�ӹ�" << endl;
		cout << "7.â��" << endl;
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
	cout << "���� ȭ�� �Դϴ�. " << endl;
	cout << "1.���� ���� " << endl;
	cout << "2.�ڷΰ��� " << endl;
	cin >> i;
	switch (i)
	{
	case 1:
		cout << "�̱���" <<endl;
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
	cout << "�׷� �� �Դϴ�. " << endl;
	cout << "1.�׷� ���ϱ� " << endl;
	cout << "2.�ڷΰ��� " << endl;
	cin >> i;
	switch (i)
	{
	case 1:
		cout << "�̱���" << endl;
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
	cout << "���۷����� ���� �Դϴ�. " << endl;
	cout << "1.���۷����� ���� " << endl;
	cout << "2.�ڷΰ��� " << endl;
	cin >> i;
	switch (i)
	{
	case 1:
		cout << "�̱���" << endl;
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
	cout << "�������� ȭ�� �Դϴ�. " << endl;
	cout << "1.�������� ����  " << endl;
	cout << "2.�ڷΰ��� " << endl;
	cin >> i;
	switch (i)
	{
	case 1:
		cout << "�̱���" << endl;
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
	cout << "������� ȭ�� �Դϴ�. " << endl;
	cout << "1.������� ���� " << endl;
	cout << "2.�ڷΰ��� " << endl;
	cin >> i;
	switch (i)
	{
	case 1:
		cout << "�̱���" << endl;
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
	cout << "�ӹ� ȭ�� �Դϴ�. " << endl;
	cout << "1.�ӹ� Ȯ�� " << endl;
	cout << "2.�ڷΰ��� " << endl;
	cin >> i;
	switch (i)
	{
	case 1:
		cout << "�̱���" << endl;
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
	cout << "â�� �Դϴ�. " << endl;
}