#include <stdio.h> 
#include <stdlib.h> 

int gcd(int m, int n)//程そ计
{
	while (n != 0)
	{
		int r = m % n;
		m = n;
		n = r;
	}
	return m;
}

int lcm(int m, int n)//程そ计
{
	return m * n / gcd(m, n);
}

int main(void)
{
	int m, n;

	printf("块ㄢ计\n");
	scanf_s("%d %d", &m, &n);

	printf("Gcd(程そ计)%d\n", gcd(m, n));
	printf("Lcm(程そ计)%d\n", lcm(m, n));

	system("pause");
	return 0;
}
