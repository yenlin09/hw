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
		output = input + 32;//�j�g��p�g
	}
	else
	{
		output = input - 32;//�p�g��j�g
	}

	if (input < 65 || input > 122)//ASC�X�b�r���H�~�ɿ��~
	{
		cout << "Enter an error alphabet! " << endl;
		system("PAUSE");
		return -1;
	}
	cout << input << " => " << output << endl;
	system("PAUSE");
	return 0;
}