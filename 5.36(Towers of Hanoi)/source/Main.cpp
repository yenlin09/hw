#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <iostream>

using namespace std;

int step;

void hanoi(int disk, char a, char b, char c)
{
	if (disk == 0)
	{
		return;
	}
	hanoi(disk - 1, a, c, b);
	cout << "將第 " << disk <<"個圓盤"<< " 從塔" << a << " 到塔" << c << endl;
	step++;
	hanoi(disk - 1, b, a, c);
}

int main()
{
	int disk;
	cout << "輸入河內塔層數 :";
	step = 0;
	cin >> disk;
	hanoi(disk, '1', '2', '3');
	cout << "共需要 " << step << "次" << endl;
	system("pause");
	return 0;
}

