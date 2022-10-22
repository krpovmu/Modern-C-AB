#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 10

int main(void)
{
	char str[ARR_SIZE];
	printf("enter you fabaloud string: ");
	fgets(str,ARR_SIZE,stdin);
	printf("your array is: %s\n",str);
}
