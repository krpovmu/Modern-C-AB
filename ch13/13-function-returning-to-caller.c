#include <stdio.h>

int myFunction(void)
{
	return 1234;
}

int main(void)
{
	int myNum = myFunction();
	printf("My Values is: %d\n",myNum);
}
