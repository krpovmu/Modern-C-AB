#include <stdio.h>

int sumNumbers(int x, int y)
{
	return x + y;
}

int main(void)
{
	int myResult = sumNumbers(23, 45);
	printf("The result of the sum is: %d\n",myResult);
}
