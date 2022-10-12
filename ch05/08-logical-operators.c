#include <stdio.h>

int main(void)
{
	int x = 1;
	int y = 0;
	int myand = x && y;
	int myor = x || y;
	int mynegation = !x;
	printf("The value of AND expression is: %d\n", myand);
	printf("The value of OR expression is: %d\n", myor);
	printf("The value of NEGATION expression is: %d\n", mynegation);
}
