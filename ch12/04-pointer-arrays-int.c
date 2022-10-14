#include <stdio.h>

int main(void)
{
	int myint[] = {10, 20, 30, 40, 50};
	int *myintp = myint;

	for( size_t i = 0 ; i < (sizeof(myint) / sizeof(int)) ; i++ ) 
	{
		printf("myarray of int in position %ld is: %d.\n",i,myintp[i]);
	}
}
