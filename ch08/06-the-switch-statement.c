#include <stdio.h>

int main(void)
{
	int x = 2;

	switch(x)
	{
	case 1:
		printf("The value of x is 1\n");
		break;
	case 2:
		printf("The value of x is 2\n");
		break;
	case 3:
		printf("The value of x is 3\n");
		break;
	default:
		printf("None of the values are valid\n");
		break;
	}
}
