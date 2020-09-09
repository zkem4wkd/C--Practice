#include <iostream>

using namespace std;

class Student
{
private:
	string name;
	int age;
public:
	Student();	//생성자
	Student(string _name, int _age); // 인자있는 생성자
	void ShowInfo();	//멤버함수
	void SetInfo(string _name, int _age);

};

Student::Student()
{
	name = "Student";
	age = 1;
}

Student::Student(string _name, int _age)
{
	name = _name;
	age = _age;
}

void Student::ShowInfo()
{
	cout << name << endl;
	cout << age << endl;
}

void Student::SetInfo(string _name, int _age)
{
	name = _name;
	age = _age;
}




int main552()
{
	Student student1 = Student();

	//student1.SetInfo("World",5);
	student1.ShowInfo();

	Student* student2 = new Student();

	student2->SetInfo("pSt", 10);
	student2->ShowInfo();

	delete student2;

	Student student3("Const", 25); //인자있는 생성자로 생성
	student3.ShowInfo();


	return 0;
}

