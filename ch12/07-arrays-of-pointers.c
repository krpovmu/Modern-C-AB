#include <stdio.h>

int main(void)
{
	char *p[] = {"First paragraph",
		   "Second paragraph",
		   "Third paragraph",
		   "Fourth paragraph"};

	for (size_t i = 0; i < (sizeof(p) / sizeof(p[0])); i++)
	{
		printf("Char in the position %ld is : %s\n",i,p[i]);
	}
}
