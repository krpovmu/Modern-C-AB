#include <stdio.h>

int main(void)
{
	int arr[] = {10, 20, 30, 40, 50};
	int* p = arr;
	printf("the pointed values is: %d\n", *p);
	++p;
	printf("Now the pointed values is: %d\n", *p);
}
