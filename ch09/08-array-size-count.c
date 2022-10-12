#include <stdio.h>

int main(void)
{
	int myarr[] = {1,2,3};
	size_t myarrsize = sizeof(myarr);
	printf("Total array size in bytes: %ld\n",myarrsize);
}
