#include <iostream>

using namespace std;

class Player
{
private:
	string name;
	int atkPoint;
	int defPoint;

	//������
	
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
	Player zero; //���ν��ÿ��� ������ ȣ��
	zero.Show();

	Player *one = new Player(); //����ڰ� ���� �޸𸮸� �Ҵ��ؼ� ����

	one->Show();

	Player two = Player(); //������ ȣ�� �� two ����

	two.Show();

	delete one;



	return 0;
}