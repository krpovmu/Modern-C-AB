#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Allocating memory corruption everywhere ...\n");
	int* p = malloc(sizeof *p);
	if(p)
	{
		*p = 123;
		printf("The value of the allocated memory is %d and the size is %zu\n",*p,sizeof *p);
	}
	free(p);
	p = NULL;
}
