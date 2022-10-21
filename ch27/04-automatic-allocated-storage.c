#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x = 123;
	printf("This is an automatic storage the value is: %d\n",x);
	
	int* xp = malloc(sizeof *xp);
	printf("This is an allocated storage the address is: %p\n",((void *)xp));
}
