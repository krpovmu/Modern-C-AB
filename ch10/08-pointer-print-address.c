#include <stdio.h>

int main(void)
{
	char c = 'a';
	int x = 123;
	float f = 456.789f;

	char *mycharp = &c;
	int *myintp = &x;
	float *myfloatp = &f;

	printf("The address of char c is: %p\n",(void *)mycharp);
	printf("The address of int  x is: %p\n",(void *)myintp);
	printf("The address of float f is: %p\n",(void *)myfloatp);
}
