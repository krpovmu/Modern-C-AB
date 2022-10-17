#include <stdio.h>

typedef struct
{
	char c;
	int x;
	double d;
}myStruct;

int main(void)
{
	myStruct s1 = {'a', 123, 345.543};
	myStruct s2;
	s2 = s1; /* copies member elements */
	printf("Values copied from s1 to s2\n");
	printf("s1.c -> s2.c now the value in s2.c is: %c\n",s2.c);
	printf("s1.x -> s2.x now the value in s2.x is: %d\n",s2.x);
	printf("s1.d -> s2.d now the value in s2.d is: %.2f\n",s2.d);
}
