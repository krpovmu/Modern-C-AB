#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p = calloc(1, sizeof *p);
	if(p)
	{
		printf("Initial value of the variable is %d\n",*p);
		*p = 123;
		printf("Initialization was successful the memory address is %p and the value %d\n",p,*p);
	}
	free(p);
	p = NULL;
}
