#include <stdio.h>
#include <stdlib.h>

int cubeByReference(int &nPtr);

int main(void)
{
	int number = 5;
	printf("The original value of number is %d", number);

	number = cubeByReference(number);

	printf("\nThe new value of number is %d\n", number);
	system("pause");
	return 0;
}

int cubeByReference(int &nPtr)
{
	return nPtr * nPtr * nPtr;
}