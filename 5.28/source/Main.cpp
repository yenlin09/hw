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
	
	if (input <= 90)
	{
		output = input + 32;//大寫轉小寫
	}
	else
	{
		output = input - 32;//小寫轉大寫
	}

	if (input < 65 || input > 122)//ASC碼在字母以外時錯誤
	{
		cout << "Enter an error alphabet! " << endl;
		system("PAUSE");
		return -1;
	}
	cout << input << " => " << output << endl;
	system("PAUSE");
	return 0;
}