#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	char input, output;
	cout << "Enter a alphabet :";
	cin >> input;
	if (input < 65 || input > 122)
	{
		cout << "Enter an error alphabet! " << endl;
		system("PAUSE");
		return -1;
	}
	if (input <= 90)
	{//�j��p
		output = input + 32;
	}
	else
	{//�p��j
		output = input - 32;
	}
	cout << input << " => " << output << endl;
	system("PAUSE");
	return 0;
}