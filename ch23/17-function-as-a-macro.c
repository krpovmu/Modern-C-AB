#include <stdio.h>

#define MY_SUM(x, y) ((x) + (y))

int main(void)
{
	int result = MY_SUM(10,30);
	printf("The result is: %d\n",result);
}
