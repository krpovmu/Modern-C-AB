#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 10

int main(void)
{
	char str[ARR_SIZE];
	printf("enter you fabulous string: ");

	if(fgets(str,ARR_SIZE,stdin) != NULL)
	{
		printf("your array is: %s\n",str);
	}
	else
	{
		printf("problems! ... program couldn't read the array\n");
	}
}
