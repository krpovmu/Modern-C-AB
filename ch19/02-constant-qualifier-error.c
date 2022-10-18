#include <stdio.h>


int main(void)
{
	const char c = 'a';
	const int x = 123;
	const double d = 456.123;
	c = 'b';
	x = 765;
	d = 876.213;
	printf("Constants defined.\n");
	printf("Their values are: %c - %d - %.2f\n",c,x,d);
}
