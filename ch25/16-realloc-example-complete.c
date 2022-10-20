#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = malloc(sizeof *p);
	if(p)
	{
		printf("Bytes in pointer: %zu Bytes, and address is : %p\n",sizeof *p,p);
	}

	int *pnew = realloc(p, 100 * sizeof *p);
	if(pnew)
	{
		printf("Resizing allocated memory ... wait please\n");
		printf("Now bytes in the new pointer: %zu Bytes, and address is: %p\n",100 * sizeof *pnew,pnew);
		free(pnew);
		pnew = NULL;
	}
	free(p);
	p = NULL;
}
