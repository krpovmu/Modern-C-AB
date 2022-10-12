#include <stdio.h>

int main(void)
{
	int mycounter = 0;
	do
	{
		printf("Hello world from a do-while loop, counter variable is %d.\n",mycounter);
		mycounter++;

	}while(mycounter < 5);
}
