#include <iostream>

using namespace std;

class pPlayer
{
public:
	pPlayer()
	{
		cout << "Constructor" << endl;
	}
	~pPlayer() //¼Ò¸êÀÚ
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