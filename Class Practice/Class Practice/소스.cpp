#include <iostream>

using namespace std;

class Person
{
private:
	int a;
public:
	int b;
protected: // 상속된 클래스만 사용 가능
	int c;
};
class student : private Person
{
public:
	void print()
	{
		cout << b << endl;
		cout << c << endl;
	}
};

class son : public student // 다중 상속
{
public:
	void print()
	{
		cout << b << endl;
		cout << c << endl;
	}
};

void main()
{


}
