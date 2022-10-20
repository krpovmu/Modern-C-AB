#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = malloc(sizeof(int));
	*p = 123;
	printf("The address of the allocated variable int is %p and the values is %d\n",p,*p);
}
