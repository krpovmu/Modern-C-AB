#include <stdio.h>

typedef union
{
	char c;
	int x;
	double d;
}mu;

int main(void)
{
	mu u;
	u.c = 'a';
	printf("Union char = %c\n",u.c);	
	u.x = 123;
	printf("Union int = %d\n",u.x);	
	u.d = 987.345;
	printf("Union int = %.2f\n",u.d);	
}
