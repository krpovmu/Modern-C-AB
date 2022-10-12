#include <stdio.h>

int main(void)
{
	int myarra[5] = {10,20,30,40,50}; /* Initialize Array */

	for(int i = 0; i < 5; i++)
	{
		printf("First print myarr[%d] = %d\n",i,myarra[i]);
	}

	printf("\n");

	myarra[0] = 100; /* change the value in the first element */
	myarra[2] = 300; /* change the value in the third element */

	for(int i = 0; i < 5; i++)
	{
		printf("Second print myarr[%d] = %d\n",i,myarra[i]);
	}
}
