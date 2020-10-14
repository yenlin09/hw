# include<stdio.h>
# include<stdlib.h>
int main(void)
{
	int i;
	printf("number\tsquare\tcube\t\n");
	for ( i = 0; i <= 10; i++)
	{
		printf("%d\t%d\t%d\t\n",i,i*i,i*i*i);
		
	}
	system("pause");
	return 0;
}