#include <stdio.h>

void thisFuckingFunction(void)
{
	printf("This fucking function is: %s\n",__func__);
}

int main(void)
{
	thisFuckingFunction();
}
