#include <iostream>

using namespace std;


int main3()
{
	int arr[5];
	int total = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 학생의 성적을 입력 : ", i + 1);
		scanf_s("%d", &arr[i]);
		total += arr[i];
	}
	printf("입력한 학생들의 성적\n");
	for (int i = 0; i < 5; i++)
	{
		
		printf("%d번째 : %d\n",i+1 , arr[i]);
	}
	printf("학생들의 총 합계 : %d\n", total);
	printf("학생들의 평균 점수 : %0.2f", (float)(total / 5));


	return 0;
}