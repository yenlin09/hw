#include <stdio.h>
#include <stdlib.h>

float main(void)
{
	float A, B, C, D, E, F;  


	printf("輸入以下資訊來計算一日開車總花費\n");
	printf("\n");

	printf("一整天的總里程數?(單位:公里)\n");
	scanf_s("%f", &A);

	printf("汽油一公升多少錢?\n");
	scanf_s("%f", &B);

	printf("平均一公升可行駛多少公里?\n");
	scanf_s("%f", &C);

	printf("一天的停車費多少錢?\n");
	scanf_s("%f", &D);

	printf("一天的通行費(過路費)多少錢?\n");
	scanf_s("%f", &E);

	printf("\n");

	F = ((A / C * B) + D + E);

	printf("一日開車總花費是%f\n", F);

	system("pause");
	return 0;

}