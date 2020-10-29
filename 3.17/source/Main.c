#include<stdio.h>
#include<stdlib.h>

int main() {
	float account, balance, charge, credit, limit, s;
 a:printf("enter account number (-1 to end):");
	scanf_s("%f", &account);
	while (account != -1) {
		printf("enter begining balance:");
		scanf_s("%f", &balance);
		printf("enter total charges:");
		scanf_s("%f", &charge);
		printf("enter total credits:");
		scanf_s("%f", &credit);
		printf("enter credit limit:");
		scanf_s("%f", &limit);
		s = balance + charge - credit;
		if (s >= limit) {
			printf("account:\t%f\n", account);
			printf("credit limit:\t%.2f\n", limit);
			printf("balance:\t%.2f\n", balance);
			printf("credit limit exceeded\n");
			printf(" \n");
		}
		goto a;
	}
	system("pause");
	return 0;
}