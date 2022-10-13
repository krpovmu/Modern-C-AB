#include <stdio.h>

int main(void)
{
	int x = 123;
	printf("The value of x before the change is: %d\n",x);

	int* p = &x;
	*p = 456;
	printf("The value of x after the change is: %d\n",x);
}
