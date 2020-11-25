#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int recursiveMaximum(int num[], int n);
int Max(int a, int b);

int main(void)
{
	int num[SIZE];

	printf("��J10�Ӥ��P�Ʀr:\n");
	for (int i = 0; i < SIZE; i++)
	{
		scanf_s("%d", &num[i]);
	}

	printf("�̤j�Ȭ�:%d\n", recursiveMaximum(num, SIZE));

	system("pause");
	return 0;
}

int Max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int recursiveMaximum(int num[], int n)
{
	if (n == 1)
	{
		return num[0];
	}
	else
	{
		return Max(num[n - 1], recursiveMaximum(num, n - 1));
	}
}