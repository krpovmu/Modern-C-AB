#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("The argument passed to this executable are: \n");
	for (size_t i = 0 ; i < argc ; i ++)
	{
		printf("arg %ld is: %s.\n",i,argv[i]);
	}
}
