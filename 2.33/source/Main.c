#include <stdio.h>
#include <stdlib.h>

float main(void)
{
	float A, B, C, D, E, F;  


	printf("��J�H�U��T�ӭp��@��}���`��O\n");
	printf("\n");

	printf("�@��Ѫ��`���{��?(���:����)\n");
	scanf_s("%f", &A);

	printf("�T�o�@���ɦh�ֿ�?\n");
	scanf_s("%f", &B);

	printf("�����@���ɥi��p�h�֤���?\n");
	scanf_s("%f", &C);

	printf("�@�Ѫ������O�h�ֿ�?\n");
	scanf_s("%f", &D);

	printf("�@�Ѫ��q��O(�L���O)�h�ֿ�?\n");
	scanf_s("%f", &E);

	printf("\n");

	F = ((A / C * B) + D + E);

	printf("�@��}���`��O�O%f\n", F);

	system("pause");
	return 0;

}