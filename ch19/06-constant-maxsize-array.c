#include <stdio.h>

int main(void)
{
	const int maxSize = 3;
	int arr[maxSize];
	arr[0] = 1;
	arr[1] = 6;
	arr[2] = 4;

	for( size_t i = 0 ; i < ((sizeof(arr)/sizeof(int))); i++ )
	{
		printf("Element %ld in arr is: %d\n",i,arr[i]);
	}
}
