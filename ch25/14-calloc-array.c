#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int main(void)
{
	int *arr = calloc(MAX_SIZE, sizeof *arr);

	if(arr)
	{
		for(size_t i = 0 ; i < MAX_SIZE ; ++i)
		{
			printf("The initial value for arr[%ld] is : %d\n",i,arr[i]);
		}
		printf("New values for the array elements \n");
		for(size_t i = 0 ; i < MAX_SIZE ; ++i)
		{
			arr[i] = (i + 1) * 10;
			printf("Value for arr[%ld] is : %d\n",i,arr[i]);
		}
	}
	free(arr);
	arr = NULL;
}
