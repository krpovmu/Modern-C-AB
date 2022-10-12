#include <stdio.h>

int main(void)
{
	char c = 'a';
	switch(c)
	{
	case 'a':
		printf("The values of c is 'a'.\n");
		break;
	case 'b':
		printf("The values of c is 'b'.\n");
		break;
	case 'c':
		printf("The values of c is 'b'.\n");
		break;
	default:
		printf("None of the values matches with the value of c.\n");
		break;
	}
}
