# include<stdio.h>
# include<stdlib.h>
int main(void)
{
	int a, b;
	printf("請輸入數字\n");
	scanf_s("%d", &a);
	b = a % 2;
	if (b == 0)

		printf("%d為偶數\n", a);

	if (b != 0)

		printf("%d為奇數\n", a);

	system("pause");
	return 0;
}
