#include <iostream>

using namespace std;


int main()
{
	int floor[6];
	int pay[6];
	int floorTotal=0;
	int payTotal=0;
	for (int i = 0; i < 5; i++)
	{
		printf("%d���� ��� �ο��� ? : ", i + 1);
		scanf_s("%d", &floor[i]);
		floorTotal += floor[i];
		pay[i] = floor[i] * 12000;
		payTotal += pay[i];
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d���� �� ������ : %d \n", i + 1, pay[i]);

	}
	printf("�ǹ��� ��� �� �ο��� %d�� �Դϴ�.\n", floorTotal);
	printf("�������� �� �ݾ��� %d�� �Դϴ�.", payTotal);



	return 0;
}