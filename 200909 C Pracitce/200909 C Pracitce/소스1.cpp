#include <iostream>

using namespace std;


int main3()
{
	int arr[5];
	int total = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("%d��° �л��� ������ �Է� : ", i + 1);
		scanf_s("%d", &arr[i]);
		total += arr[i];
	}
	printf("�Է��� �л����� ����\n");
	for (int i = 0; i < 5; i++)
	{
		
		printf("%d��° : %d\n",i+1 , arr[i]);
	}
	printf("�л����� �� �հ� : %d\n", total);
	printf("�л����� ��� ���� : %0.2f", (float)(total / 5));


	return 0;
}