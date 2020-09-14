#include <iostream>

using namespace std;

class cObj
{
protected:
	int Hp;
public:
	void SetHp(int _Hp)
	{
		Hp = _Hp;
	}

	void Init()
	{
		cout << "Obj" << endl;
	}
};

class cPlayer : public cObj
{
public:
	void Init()
	{
		cout << "Player" << endl;
	}

	void Draw()
	{
		cout << "HP : " << Hp << endl;
	}
};

int main()
{
	cPlayer p;

	p.SetHp(100);

	p.Draw();

	
	return 0;
}