#include <stdio.h>

int main(void)
{
	int x = 123;
	int* xp = &x;
	printf("Pointer direction is %p and the dereferenced value is: %d\n",xp,*xp);
}
