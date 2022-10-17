#include <stdio.h>

typedef struct
{
	char a;
	int x;
	double d;
}myStruct;

void printMystruct(myStruct s)
{
	printf("The char values is: %c\n",s.a);
	printf("The int values is: %d\n",s.x);
	printf("The double values is: %.2f\n",s.d);
}

int main(void)
{
	myStruct ms = {'m', 123, 123.456};
	printMystruct(ms);
}
