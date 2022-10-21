#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double* dp = malloc(sizeof *dp);
	if(dp)
	{
		*dp = 4567889.34;
		printf("The values is: %.2f and the size: %zu\n",*dp, sizeof *dp);
	}
	free(dp);
	dp = NULL;

	int* ip = malloc(sizeof *ip);
	if(ip)
	{
		*ip = 12345;
		printf("The values is: %d and the size: %zu\n",*ip, sizeof *ip);
	}
	free(ip);
	ip = NULL;
}
