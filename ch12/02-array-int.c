#include <stdio.h>

int main(void)
{
	int intarr[] = {10, 20, 30, 40, 50};
	intarr[0] = 234;
	intarr[4] = 322;

	for(size_t i = 0 ; i < (sizeof(intarr) / sizeof(int)) ; i++)
	{
		printf("Value of array in position %ld is %d\n",i,intarr[i]);
	}

}
