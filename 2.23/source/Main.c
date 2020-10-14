#include <stdio.h>
#include <stdlib.h>

main(void)
{
	int a, b, c, max, min;
	printf("块计块程计\n");
	printf("叫块材计∽");
	scanf_s("%d", &a);
	printf("叫块材计∽");
	scanf_s("%d", &b);
	printf("叫块材计∽");
	scanf_s("%d", &c);

	max = a;
	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	printf("(%d,%d,%d)い程计%d\n", a, b, c, max);
	min = a;
	if (min > b)
	{
		min = b;
	}
	if (min > c)
	{
		min = c;
	}
	printf("(%d,%d,%d)い程计%d\n", a, b, c, min);
	system("pause");
	return 0;
}