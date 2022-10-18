#include <stdio.h>

#define MY_SUM(x, y) ((x) + (y))

int main(void)
{
	double result = MY_SUM(10.443,30.223);
	printf("The result is: %.2f\n",result);
}
