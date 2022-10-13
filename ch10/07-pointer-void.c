#include <stdio.h>

int main(void)
{
	int x  = 123;
	int *ip = &x; /* get the address of the x object */
	void *vp;
	vp = ip; /* void pointer get the value of int pointer */
	printf("The void pointer value is : %d\n", *((int *)vp));
}
