#include <stdio.h>

int main(void)
{
	int x = 34;
	if ( x > 50 && x < 100 )
	{
		printf("the variable x = %d is greater than 50 and less than 100\n",x);
	}
	else
	{
		printf("the variable x = %d is not greater than 50 and less than 100\n",x);
	}
}
