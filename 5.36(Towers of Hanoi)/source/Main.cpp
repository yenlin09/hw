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
	cout << "�N�� " << disk <<"�Ӷ�L"<< " �q��" << a << " ���" << c << endl;
	step++;
	hanoi(disk - 1, b, a, c);
}

int main()
{
	int disk;
	cout << "��J�e����h�� :";
	step = 0;
	cin >> disk;
	hanoi(disk, '1', '2', '3');
	cout << "�@�ݭn " << step << "��" << endl;
	system("pause");
	return 0;
}

