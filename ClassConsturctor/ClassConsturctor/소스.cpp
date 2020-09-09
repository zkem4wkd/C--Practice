#include <iostream>

using namespace std;

class Player
{
private:
	string name;
	int atkPoint;
	int defPoint;

	//생성자
	
public:
	Player()
	{
		name = "User";
		atkPoint = 1;
		defPoint = 1;
	}
	void Show()
	{

		cout << name << endl;
		cout << atkPoint << endl;
		cout << defPoint << endl;
	}
};


int main55()
{
	Player zero; //내부스택에서 생성자 호출
	zero.Show();

	Player *one = new Player(); //사용자가 직접 메모리를 할당해서 생성

	one->Show();

	Player two = Player(); //생성자 호출 후 two 생성

	two.Show();

	delete one;



	return 0;
}