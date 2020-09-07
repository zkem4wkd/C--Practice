#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	/*goto point;
	cout << 1 << endl;

point:
	cout << 2 << endl;

	return 0;*/

	/*int a = 1;
	while (a < 10)
	{
		cout << a++ << endl;

		if (a == 5)
		{
			goto exit;
		}
	}
exit:
	cout << "exit" << endl;*/


	/*int a = 10;
	int b = 13;
	cout << bitset<8>(a) << endl;
	cout << bitset<8>(b) << endl;

	cout << bitset<8>(a | b) << endl;
	cout << bitset<8>(a & b) << endl;
	cout << bitset<8>(a ^ b) << endl;
	cout << bitset<8>(~a) << endl;
	int c = a << 2;
	cout << bitset<8>(c) << endl;*/

	int equip = 0;

	enum equipActive
	{
		helmet = 1 << 7,
		weapon = 1 << 6,
		boots = 1 << 5,
		shiled = 1 << 4,
		ring = 1 << 3,
		neck = 1 << 2,
		armor = 1 << 1,
		glove = 1 << 0
	};

	equip = helmet | weapon | ring;

	cout << bitset<8>(equip) << endl;


	equip = equip & ~ring;

	cout << bitset<8>(equip) << endl;
}