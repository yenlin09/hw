#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <iostream>

using namespace std;

long long int f(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	return f(n - 1) + f(n - 2);
}

int main()
{
	int n;
	cout << "Enter n :";
	cin >> n;
	cout << "f(" << n << ") = " << f(n) << endl;
	system("pause");
	return 0;
}