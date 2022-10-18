#include <stdio.h>

double myFunction(const double a, const double b)
{
	return a / b;
}

int main(void)
{
	int x = 123;
	double y = 4567.789;
	double result = myFunction(x,y);
	printf("The result is: %.2f\n",result);
}
