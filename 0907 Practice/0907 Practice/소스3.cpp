#include <iostream>

using namespace std;

int main1212()
{
	cout << "1." << endl;
	for (int i = 0; i <= 6; i++)
	{
		for (int j = i; j <= 5; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "2." << endl;
	for (int i = 5; i > 0; i--)
	{
		for (int j = 0; j < 5-i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "3." << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}