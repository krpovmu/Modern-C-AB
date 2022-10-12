#include <stdio.h>

int main(void)
{
	int arr[] = {1, 2, 3};
	size_t arrcount = sizeof(arr) / sizeof(int);
	printf("The number of elements in the array are: %ld\n",arrcount);
}
