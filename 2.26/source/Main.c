# include<stdio.h>
# include<stdlib.h>
int main(void)
{
	int a, b;
	printf("請輸入數字\n");
	scanf_s("%d%d", &a,&b);
	
	if (a%b == 0)

		printf("%d為%d的倍數\n", a,b);

	if (a%b != 0)

		printf("%d不為%d的倍數\n", a,b);

	system("pause");
	return 0;
}