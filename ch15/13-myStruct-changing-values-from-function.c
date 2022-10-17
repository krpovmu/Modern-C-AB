#include <stdio.h>

typedef struct
{
	char c;
	int x;
	double d;
}ms;

ms changeStruct(char a, int b, double c)
{
	ms temp;
	temp.c = a;
	temp.x = b;
	temp.d = c;
	return temp;
}

int main(void)
{
	ms s = changeStruct('a', 123, 123.345);
	printf("The values in the structure are: \n");
	printf("char: %c\n",s.c);
	printf("int: %d\n",s.x);
	printf("char: %.2f\n",s.d);
}
