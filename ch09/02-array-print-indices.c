#include <stdio.h>

int main(void)
{
	int myarra[5];
	myarra[0] = 10;
	myarra[1] = 20;
	myarra[2] = 30;
	myarra[3] = 40;
	myarra[4] = 50;

	for(int i = 0; i < 5; i++)
	{
		printf("myarr[%d] = %d\n",i,myarra[i]);
	}
}
