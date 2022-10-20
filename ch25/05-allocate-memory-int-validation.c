#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = malloc(sizeof(int));
	if(p)
	{
		*p = 123;
		printf("The address of the pointer dinamically crated is %p and the value is: %d\n",p,*p);	
	}
}
