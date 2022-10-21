#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *ipa = malloc(5 * sizeof *ipa);
	if(ipa)
	{
		printf("size of pointer is %zu\n",5 * sizeof *ipa);
	}
	int *ipb = realloc(ipa, 10 * sizeof *ipa);
	if(ipb)
	{
		printf("reallocating ...\n");
		printf("size of pointer is %zu\n",10 * sizeof *ipb);
		free(ipb);
	}
	else
	{
		free(ipa);
	}
	//printf("Address IPA: %p\n",ipa);
	//printf("Address IPB: %p\n",ipb);
	ipa = NULL;
	ipb = NULL;
}
