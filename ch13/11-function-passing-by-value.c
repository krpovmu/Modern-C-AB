#include <stdio.h>

void myFunction(int x)
{
	x = 3456;
}

int main(void)
{
	int a = 123;
	printf("Value before pass to the function is: %d\n",a);
	myFunction(a);
	printf("Value after pass to the function is: %d\n",a);
}
