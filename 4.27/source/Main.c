#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, s, k;
	for ( a = 5; a <= 500; a++) {
		for ( s = 1; s <= 300; s++) {
			for ( k = 1; k <= 500; k++) {
				if ((a * a) == (s * s + k * k))
					printf("%3d^2=%3d^2+%3d^2\n", a, s, k);
			}
		}
	}
	system("pause");
	return 0;
}