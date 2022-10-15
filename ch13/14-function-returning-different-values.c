#include <stdio.h>

int myFunction(int x)
{
	if(x > 1)
	{
		return 1;
	}
	if(x < 1)
	{
		return 0;	
	}
	return 0;
}

int main(void)
{
	int myNum = myFunction(233);
	printf("The return of the function is: %d\n",myNum);
}
