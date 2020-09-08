#include <iostream>

using namespace std;

class Student
{
private:
	string name;
	int age;
public:
	void ShowInfo();
	void SetInfo(string _name, int _age);
};

void Student::ShowInfo()
{
	cout << "Name : " << name << endl;
	cout << "Age : " << age << endl;
}

void Student::SetInfo(string _name, int _age)
{
	name = _name;
	age = _age;
}



int main()
{
	Student a;
	a.SetInfo("Lee", 12);
	a.ShowInfo();



	return 0;
}


