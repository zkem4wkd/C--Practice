#include <iostream>

using namespace std;

class Student
{
private:
	int number;
	string name;
	int kor;
	int eng;
	int math;
public:
	void initialize(); //멤버변수의 초기화
	void showData();
};

void Student::initialize()
{
	number = 101;
	name = "Unknown";
	kor = 0;
	eng = 0;
	math = 0;
}
void Student::showData()
{
	cout << "Student Number : " << number << endl;
	cout << "Student Name : " << name << endl;
	cout << "Korean Grade : " << kor << endl;
	cout << "English Grade  : " << eng << endl;
	cout << "Math Grade : " << math << endl;
}


void main5()
{
	Student kim;

	kim.initialize();
	kim.showData();


}