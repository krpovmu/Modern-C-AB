#include <stdio.h>

int main(void)
{
	int x  = 123;

	switch(x)
	{
	case 100:
		printf("The value of X is 100.\n");
		break;
	case 123:
		printf("The value of X is 123.\n");
		break;
	case 456:
		printf("The value of X is 456.\n");
		break;
	default:
		printf("None of the above values matches the value of X.\n");
		break;

	}
}
