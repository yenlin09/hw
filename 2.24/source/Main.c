# include<stdio.h>
# include<stdlib.h>
int main(void)
{
	int a, b;
	printf("叫块计\n");
	scanf_s("%d", &a);
	b = a % 2;
	if (b == 0)

		printf("%d案计\n", a);

	if (b != 0)

		printf("%d计\n", a);

	system("pause");
	return 0;
}
