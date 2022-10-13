#include <stdio.h>

int main(void)
{
	char* p[] = {"First sentence",
		     "Second sentence",
		     "Third sentence",
		     "Fourth sentence"};

	for( size_t i = 0 ; i < 4 ; i++ )
	{
		printf("The value of element %ld is : %s\n",i,p[i]);
	
	}
}
