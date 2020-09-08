#include <iostream>


using namespace std;

struct lol
{
private:
	string id;
	string password;
	string name;
public:
	int level = 1;
	void SetInfo(string _id, string _password, string _name);
	void ShowInfo();
	
};

void lol::SetInfo(string _id, string _password, string _name)
{
	id = _id;
	password = _password;
	name = _name;
	level = 1;
}

void lol::ShowInfo()
{
	cout << "Id : " << id << endl;
	cout << "PassWord : " << password << endl;
	cout << "Name : " << name << endl;
	cout << "Level : " << level << endl;
}

int main12()
{
	lol user1;

	user1.SetInfo("asd", "1234", "Nick");
	user1.ShowInfo();



	return 0;
}