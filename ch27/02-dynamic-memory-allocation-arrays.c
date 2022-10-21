#include <stdio.h>
#include <stdlib.h>

#define MAX_VALUE 5

int main(void)
{

	double* dp = malloc(MAX_VALUE * sizeof *dp);
	if(dp)
	{
		for( size_t i = 0 ; i < MAX_VALUE ; ++i)
		{
			*dp[i] = (i + 10) * 230;
			printf("value of dp[%ld] is: %d\n",i, *dp[i]);
		}
	}
	free(dp);
	dp = NULL;
}
