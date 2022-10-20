#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = malloc(sizeof *p);
	if(p)
	{
		*p = 123456;
		printf("Memory sucessfully assigned in %p with value %d\n",p,*p);
	}
	else
	{
		printf("There was problems trying to allocate memory\n");
		return -1;
	}
	free(p);
}
