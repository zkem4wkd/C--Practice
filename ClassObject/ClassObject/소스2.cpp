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
	void outputData();


};
void Student::outputData()
{
	cout << number << endl;
	cout << name << endl;
	cout << kor << endl;
	cout << eng << endl;
	cout << math << endl;

}


int main76()
{
	Student park = { 101,"Park ing",100,90,90 };
	park.outputData();


	return 0;
}