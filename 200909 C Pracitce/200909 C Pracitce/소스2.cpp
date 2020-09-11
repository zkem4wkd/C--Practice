#include <iostream>

using namespace std;

int main4()
{
	int arr[5] = {0};
	int num;

	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 숫자 입력 : ", i + 1);
		scanf_s("%d", &arr[i]);
		for (int j = 0; j < 5; j++)
		{
			if (arr[j] > arr[i])
			{
				num = arr[i];
				arr[i] = arr[j];
				arr[j] = num;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}



	return 0;
}