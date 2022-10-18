#include <stdio.h>

#define ARRAY_SIZE 5

int main(void)
{
	int arr[ARRAY_SIZE] = {4450,3331,23342,55673,33224};
	for (size_t i = 0 ; i < ARRAY_SIZE ; ++i)
	{
		printf("array[%ld]: %d\n",i,arr[i]);
	}
}
