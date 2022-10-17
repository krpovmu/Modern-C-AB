#include <stdio.h>

typedef struct
{
	char c;
	int x;
	double d;
}ms;

void printStruct(ms *ps)
{
	printf("char: %c\n",ps->c);
	printf("int: %d\n",ps->x);
	printf("char: %.2f\n",ps->d);
}

int main(void)
{
	ms s = {'a', 123, 123.345};
	printStruct(&s);
}
