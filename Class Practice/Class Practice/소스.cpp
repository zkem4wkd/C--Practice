#include <iostream>

using namespace std;

class Person
{
private:
	int a;
public:
	int b;
protected: // ��ӵ� Ŭ������ ��� ����
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

class son : public student // ���� ���
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
