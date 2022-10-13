#include <stdio.h>

int main(void)
{
	char c = 'a';
	int x  = 123;
	float f = 456.789f;

	char *mycharp = &c;
	int *myintp = &x;
	float *myfloatp = &f;

	printf("The value of pointer to char is: %c\n",*mycharp);
	printf("The value of pointer to int is: %d\n",*myintp);
	printf("The value of pointer to float is: %.3f\n",*myfloatp);
}
