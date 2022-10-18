#include <stdio.h>

void pepeFunction(void)
{
	printf("This is the function %s\n",__func__);
}

int main(void)
{
	printf("The beggining of main function is on: %d\n",__LINE__);
	pepeFunction();
	printf("The date is: %s\n",__DATE__);
	printf("The name of the file is: %s\n",__FILE__);
	printf("The version if the compiler is: %ld\n",__STDC_VERSION__);
}
