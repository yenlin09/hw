# include<stdio.h>
# include<stdlib.h>
int main(void)
{
	int a, b;
	printf("�п�J�Ʀr\n");
	scanf_s("%d%d", &a,&b);
	
	if (a%b == 0)

		printf("%d��%d������\n", a,b);

	if (a%b != 0)

		printf("%d����%d������\n", a,b);

	system("pause");
	return 0;
}