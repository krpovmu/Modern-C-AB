#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = malloc(sizeof *p);
	printf("Bytes in pointer: %zu Bytes, and address is : %p\n",sizeof *p,p);
	printf("Resizing allocated memory ... wait please\n");
	int *pnew = realloc(p, 100 * sizeof *p);
	printf("Now bytes in the new pointer: %zu Bytes, and address is: %p\n",100 * sizeof *pnew,pnew);
}
