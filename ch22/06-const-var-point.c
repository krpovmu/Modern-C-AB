#include <stdio.h>

int main(void)
{
	const int x = 123;
	char* const s = "This is a constant char pointer";
	int y = 567;
	const int* yp = &y;

	printf("const int: %d\n",x);
	printf("const char: %p\n",(void *)s);
	printf("const pointer: %d\n",*yp);
}
