#include <stdio.h> 
#include <stdlib.h> 

int gcd(int m, int n)//�̤j���]��
{
	while (n != 0)
	{
		int r = m % n;
		m = n;
		n = r;
	}
	return m;
}

int lcm(int m, int n)//�̤p������
{
	return m * n / gcd(m, n);
}

int main(void)
{
	int m, n;

	printf("��J��ơG\n");
	scanf_s("%d %d", &m, &n);

	printf("Gcd(�̤j���]��)�G%d\n", gcd(m, n));
	printf("Lcm(�̤p������)�G%d\n", lcm(m, n));

	system("pause");
	return 0;
}
