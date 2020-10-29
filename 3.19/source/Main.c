# include<stdio.h>
# include<stdlib.h>
double days, charge, rate, pri;
int main(void)
{
	while (pri != -1)
	{
		printf("Enter loan principal (-1 to end):", pri);
		scanf_s("%lf", &pri);
		if (pri == -1.0) break;
		printf("Enter interest rate:", rate);
		scanf_s("%lf", &rate);
		printf("Enter term of the loan in days:", days);
		scanf_s("%lf", &days);
		charge = pri * rate * days / 365;
		printf("The interest charge is $%.2f\n", charge);
		printf("      \n", charge);
	}
	system("pause");
	return 0;

}