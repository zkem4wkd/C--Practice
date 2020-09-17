#include <iostream>

using namespace std;

struct INFO
{
public:
	int kor;
	int eng;
	int math;

	INFO() {}
	INFO(int _kor, int _eng, int _math)
		:kor(_kor),eng(_eng),math(_math)
	{

	}
};


class student
{
public:
	INFO cst;
public:
	student()
	{

	}
	student(int _kor, int _eng, int _math)
		:cst(_kor,_eng,_math)//초기화 리스트
	{

	}
};

void main()
{
	student st = student(1, 2, 3);

	cout << st.cst.eng << endl;
}