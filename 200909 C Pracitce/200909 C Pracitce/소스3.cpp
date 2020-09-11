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
		printf("%d층의 사는 인원은 ? : ", i + 1);
		scanf_s("%d", &floor[i]);
		floorTotal += floor[i];
		pay[i] = floor[i] * 12000;
		payTotal += pay[i];
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d층의 총 관리비 : %d \n", i + 1, pay[i]);

	}
	printf("건물에 사는 총 인원은 %d명 입니다.\n", floorTotal);
	printf("관리비의 총 금액은 %d원 입니다.", payTotal);



	return 0;
}