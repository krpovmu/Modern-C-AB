#include <stdio.h>

int main(void)
{
	int arr[] = {10, 20, 30, 40, 50};
	int *p = arr; /* p point to the first element in the array*/
	printf("The first element in array is: %d\n", *p);
}
