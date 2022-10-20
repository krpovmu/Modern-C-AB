#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = malloc(sizeof(int));
	if(p == NULL)
	{
		printf("Pointer allocatio problem is NULL right now\n");
		return -1;	
	}
	*p = 123;
}
