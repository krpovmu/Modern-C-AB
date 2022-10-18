#include <stdio.h>

void printerFunction(const int* p)
{
	printf("Constants pointer defined.\n");
	printf("Pointer address: %p\n",(void *)p);
	printf("Pointer value: %d\n",*p);
}

int main(void)
{
	int x = 123;
	printerFunction(&x);
}
