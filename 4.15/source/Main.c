# include <stdio.h>
# include <stdlib.h>
int main(void)
{
	double rate, investment;
	int years;
	investment = 5000;
	for (rate = 10.0; rate <= 12.0; rate = rate + 0.5)
	{
		for (years = 1; years <= 15; years++)
		{
			investment = investment + investment * rate / 100;
		}
		printf(" $5000 �Arate%.1lf%%�A�L15�~�A�`���B��$%.2lf\n", rate, investment);
		investment = 5000;
	}
	system("pause");
	return 0;
}