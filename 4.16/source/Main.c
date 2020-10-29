#include<stdio.h>
#include<stdlib.h>

int main(void) {

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 1; i <= 10; i++) {
		for (int j = i; j <= 10; j++) {
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i <= 10; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}
		for (int n = 1; n <= 10 - i; n++) {
			printf("%s", "*");
		}
		printf("\n");
	}

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10 - i; j++) {
			printf(" ");
		}
		for (int n = 1; n <= i; n++) {
			printf("%s", "*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}