#include <stdio.h>

void byAddress(int *ap)
{
	(*ap)++;
}


int main(void)
{
	int a = 123;
	printf("Value before changes: %d\n",a);
	byAddress(&a);
	printf("Value after change by address: %d \n",a);
}
