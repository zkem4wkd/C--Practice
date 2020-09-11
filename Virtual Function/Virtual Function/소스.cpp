#include <iostream>

using namespace std;

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