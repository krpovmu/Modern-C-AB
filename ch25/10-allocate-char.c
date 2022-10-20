#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char* c = malloc(sizeof *c);
	if(c)
	{
		*c = 'A';
		printf("Char is : %c and its memory address is: %p\n",*c,c);
	}
	free(c);
	c = NULL;
}
