#include <iostream>

using namespace std;

int main453()
{
	int num1, num2;
	cout << "Input number1 : ";
	cin >> num1;
	cout << "Input number2 : ";
	cin >> num2;

	for (int i = 1; i <= num1; i++)
	{
		for (int j = 1; j <= num2; j++)
		{
			cout << i << "*" << j << " = " << i * j << " ";
		}
		cout << endl;
		cout << endl;
	}



	return 0;
}