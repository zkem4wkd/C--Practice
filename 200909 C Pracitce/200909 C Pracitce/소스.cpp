#include <iostream>

using namespace std;


void main2()
{

	int test[4];

	printf("수학 점수를 입력 : ");
	scanf("%d", &test[0]);
	printf("영어 점수를 입력 : ");
	scanf("%d", &test[1]);
	printf("국어 점수를 입력 : ");
	scanf("%d", &test[2]);
	test[3] = test[0] + test[1] + test[2];

	printf("수학 : %d\n", test[0]);
	printf("영어 : %d\n", test[1]);
	printf("국어 : %d\n", test[2]);

	printf("합계 : %d\n", test[3]);
	printf("평균 : %0.2f\n", (float)(test[3] / 3));

}