# include<stdio.h>
# include<stdlib.h>
int main(void)
{
	double sales, salary;

	sales = 0;
	while (sales != -1.0)
	{
		printf("enter sales in dollars (-1 to end):");
		scanf_s("%lf",&sales);
		if (sales == -1) break;
		salary = 200 + sales * 0.09;
		printf("salary is %.2f\n",salary);
		printf("     \n", salary);

	}
	system("pause");
	return 0;
}
