#include <stdio.h>

int main(void)
{
	double myd = 123.456;
	double* mydp = &myd;

	printf("When we try to dereference the pointer to double is: %f\n", *mydp);

	*mydp = 234.657;

	printf("Changing value of variable is: %f\n", *mydp);
}
