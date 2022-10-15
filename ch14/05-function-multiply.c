#include <stdio.h>

int multiply(int a, int b)
{
	return a * b;
}

int main(void)
{
	int result=multiply(45, 34);
	printf("Result is: %d\n",result);
}
