# include<stdio.h>
# include<stdlib.h>
double hours, rate, salary,salaryy;
int main(void)
{
	while (hours != -1)
	{
		printf("Enter # of hours worked (-1 to end):", hours);
		scanf_s("%lf", &hours);
		if (hours == -1.0) break;
		printf("Enter hourly rate of the worker($00.00):", rate);
		scanf_s("%lf", &rate);
		salary = hours * rate;
		salaryy = hours * rate+(hours-40)*(rate/2);
		if (hours <= 40)
		{
			printf("Salary is $%.2f\n", salary);
			printf(" \n");
		}
		else
		{
			printf("Salary is $%.2f\n", salaryy);
			printf(" \n");
		}
		

	}
	system("pause");
	return 0;

}