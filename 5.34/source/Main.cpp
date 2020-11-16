#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int power(int b, int e)
{
	if (e == 1)
	{
		return b ;
	}
	else if (e == 0)
	{
		return b = 1;
	}
	return b * power(b, e - 1);
}

int main()
{
	int b, e;
	cout << "enter base :";
	cin >> b;
	cout << "enter exponent :";
	cin >> e;
	cout << "­È¬° :" << power(b, e) << endl;
	system("pause");
	return 0;
}