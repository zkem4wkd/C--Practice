#include <iostream>

using namespace std;


void main2()
{

	int test[4];

	printf("���� ������ �Է� : ");
	scanf("%d", &test[0]);
	printf("���� ������ �Է� : ");
	scanf("%d", &test[1]);
	printf("���� ������ �Է� : ");
	scanf("%d", &test[2]);
	test[3] = test[0] + test[1] + test[2];

	printf("���� : %d\n", test[0]);
	printf("���� : %d\n", test[1]);
	printf("���� : %d\n", test[2]);

	printf("�հ� : %d\n", test[3]);
	printf("��� : %0.2f\n", (float)(test[3] / 3));

}