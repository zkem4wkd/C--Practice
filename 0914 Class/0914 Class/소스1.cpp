#include <iostream>

using namespace std;

class cObj
{
private:
	int a = 10;
	int b = 20;
public:
	void SetA(int _a)
	{
		a = _a;
	}
	void SetB(int _b)
	{
		b = _b;
	}

	int GetA() 
	{
		return a;
	}
	int GetB()
	{
		return b;
	}

	void Render()
	{
		cout << a << "\t" << b << endl;
	}
public:
	cObj()
	{
		cout << "持失切" << endl;
	}
	cObj(int _a, int _b)
	{
		cout << _a << _b << endl;
	}
	~cObj()
	{
		cout << "社瑚切" << endl;
	}
};

int main2()
{
	/*cObj obj(10,20);
	
	obj.Render();

	obj.SetA(5);

	obj.Render();

	obj.SetB(50);

	obj.Render();

	int A = obj.GetA();

	cout << A << endl;

	int B = obj.GetB();

	cout << B << endl;*/

	/*cObj Obj[3];

	for (int i = 0; i < 3; i++)
	{
		Obj[i].Render();
			
	}*/

	/*cObj* pObj;

	pObj = new cObj;

	pObj->SetA(100);
	pObj->Render();

	delete pObj;*/


	return 0;
}