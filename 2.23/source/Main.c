#include <stdio.h>
#include <stdlib.h>

main(void)
{
	int a, b, c, max, min;
	printf("��J�T�Ʀr�A�ÿ�X�̤j���ƭ�\n");
	printf("�п�J�Ĥ@�ӼƦr��");
	scanf_s("%d", &a);
	printf("�п�J�ĤG�ӼƦr��");
	scanf_s("%d", &b);
	printf("�п�J�ĤT�ӼƦr��");
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
	printf("�b(%d,%d,%d)���A�̤j�ƭȬ�%d\n", a, b, c, max);
	min = a;
	if (min > b)
	{
		min = b;
	}
	if (min > c)
	{
		min = c;
	}
	printf("�b(%d,%d,%d)���A�̤p�ƭȬ�%d\n", a, b, c, min);
	system("pause");
	return 0;
}