#include <stdio.h>

int byValue(int x)
{
	return ++x;
}

int main(void)
{
	int a = 123;
	printf("The value inside main function is: %d\n",a);
	byValue(a);
	printf("The value after pass through the function is: %d\n",a);
}
