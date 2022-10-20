#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(void)
{
	int *p = malloc(SIZE * sizeof *p);
	if(p)
	{
		p[0] = 123;
		p[1] = 456;
		p[2] = 789;
		p[3] = 987;
		p[4] = 654;
		printf("Sucessfully allocation of memory\n");
		//for ( size_t i = 0 ; i < (sizeof p / sizeof p[0]) ; ++i )
		for ( size_t i = 0 ; i < SIZE ; ++i )
		{
			printf("Value p[%ld] is : %d\n",i,p[i]);
		}
	}
	free(p);
	p = NULL;
}
