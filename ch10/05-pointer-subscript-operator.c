#include <stdio.h>

int main(void)
{
	int arr[] = {10, 20, 30, 40, 50};
	int *p = arr; /* p point to the first element in the array*/
	for (size_t i = 0 ; i < (sizeof(arr) / sizeof(int)) ; i++)
	{
		printf("The element %ld in the array is: %d\n",i,p[i]);
	}

	printf("\nChaging some elements in array: \n");

	int *m = arr;
	*m = 11;
	m[4] = 45;

	for (size_t i = 0 ; i < (sizeof(arr) / sizeof(int)) ; i++)
	{
		printf("The element %ld in the array is: %d\n",i,m[i]);
	}
}
