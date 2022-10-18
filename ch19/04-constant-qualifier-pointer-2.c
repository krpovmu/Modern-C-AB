#include <stdio.h>


int main(void)
{
	int x = 123;
	const int* p = &x; // constant pointer
	printf("Constants pointer defined.\n");
	printf("Pointer address: %p\n",(void *)p);
	printf("Pointer value: %d\n",*p);
}
