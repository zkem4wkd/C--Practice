#include <iostream>
using namespace std;
class Student
{
public:
	int number;
	string name;
	int kor;
	int eng;
	int math;
public:
	void showDate()
	{
		cout << "Grade Number : " << number << endl;
		cout << "Name : " << name << endl;
		cout << "Korean Grade : " << kor << endl;
		cout << "English Grade : " << eng << endl;
		cout << "Math Grade : " << math << endl;

	}
};



void main12()
{
	Student lee;
	lee.number = 101;
	lee.name = "SeoMoon Lee";
	lee.kor = 100;
	lee.eng = 90;
	lee.math = 90;

	lee.showDate();



}