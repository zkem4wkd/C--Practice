#include <iostream>

using namespace std;
//일반 가상함수 - 부모 클래스가 자식 클래스에게 기본적으로 물려주는 기능
// 순수 가상함수 - 자식이 꼭 가지고 있어야 할 기능

class Parent
{

public:
	virtual void func() // virtual function
	{
		cout << "Parent class function" << endl;
	}
};

class Child : public Parent
{

	void func()
	{
		cout << "Child class function" << endl;
	}
};

int main()
{
	Parent P, * pP;
	Child C;

	pP = &P;
	pP->func();
	pP = &C;
	pP->func();

	return 0;
}