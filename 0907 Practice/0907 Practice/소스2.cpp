#include <iostream>

using namespace std;

int main555()
{
	int kor, eng, math;
	int total;
	double avg = 0.0f;

	cout << " Input Korean grade : ";
	cin >> kor;
	cout << " Input English grade : ";
	cin >> eng;
	cout << " Input Math grade : ";
	cin >> math;
	total = kor + eng + math;
	avg = (float)total / 3;

	cout << "Total = " << total << endl;
	cout.precision(5);
	cout << "Average = " << (float)avg << endl;
	



	return 0;
}