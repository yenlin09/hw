# include<stdio.h>
# include<stdlib.h>
int main(void)
{
	int a, b;
	printf("�п�J�Ʀr\n");
	scanf_s("%d", &a);
	b = a % 2;
	if (b == 0)

		printf("%d������\n", a);

	if (b != 0)

		printf("%d���_��\n", a);

	system("pause");
	return 0;
}
