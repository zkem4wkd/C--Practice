#include <iostream>

using namespace std;

class pPlayer
{
public:
	pPlayer()
	{
		cout << "Constructor" << endl;
	}
	~pPlayer() //�Ҹ���
	{
		cout << "Destructor" << endl;
	}
};




int main()
{
	pPlayer p;
	pPlayer* p1 = new pPlayer();

	delete p1;


	return 0;
}