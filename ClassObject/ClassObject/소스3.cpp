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
	Student(); //Default »ı¼ºÀÚ
	void outDate();
};
Student::Student()
{
	number = 101;
	name = "Unknown";
	kor = 0;
	eng = 0;
	math = 0;

}
void Student::outDate()
{
	cout << number << endl;
	cout << name << endl;
	cout << kor << endl;
	cout << eng << endl;
	cout << math << endl;
}


int main()
{
	Student* kim = new Student();

	kim->outDate();



	return 0;
}