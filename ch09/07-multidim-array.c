#include <stdio.h>

int main(void)
{
	int myarr[2][3] = {{1,2,3},
			   {4,5,6}};
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("The element in row %d and column %d is: %d \n",i,j,myarr[i][j]);
		}
	}
}
