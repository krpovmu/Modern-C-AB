#include <stdio.h>

int sumNum(int x, int y)
{
	return x + y;
}

int main(void)
{
	int result = sumNum(234, 345);
	printf("The result of the sum of %d and %d is %d\n",234,345,result);
}
