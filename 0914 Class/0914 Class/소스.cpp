#include <iostream>

using namespace std;

class cObj
{
public:
	virtual void Init()
	{
		cout << "OBJ" << endl;
	}
	
};

class cPlayer : public cObj
{
public:
	void Init()
	{
		cout << "Player" << endl;
	}
	void Draw()
	{
		cout << "Draw" << endl;
	}
};

class cWizard : public cPlayer
{
public:
	void Init()
	{
		cout << "Wizard" << endl;
	}
};

int main()
{
	/*cObj obj;
	obj.Init();
	
	cPlayer Player;
	Player.Init();

	cWizard Wizard;
	Wizard.Init();*/

	/*cObj* pObj = new cObj;
	cObj* pObj2 = new cPlayer;
	cObj* pObj3 = new cWizard;

	pObj->Init();
	pObj2->Init();
	pObj3->Init();*/

	/*cPlayer* pObj = new cPlayer;
	cPlayer* pObj2 = new cWizard;

	pObj->Init();
	pObj->Draw();
	pObj2->Init();*/

	//Overriding
	//Virtual
	cObj* pObj = new cObj;
	cObj* pObj2 = new cPlayer;
	cObj* pObj3 = new cWizard;

	pObj->Init();
	pObj2->Init();
	pObj3->Init();

	//다형성 상속관계에서 부모의 타입인데
	//어느 자식이든 갈수있다.
	((cPlayer*)pObj)->Draw();

	return 0;
}