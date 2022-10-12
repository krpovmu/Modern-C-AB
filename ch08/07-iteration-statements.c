#include <stdio.h>

int main(void)
{
	printf(" Using for loop:\n");
	for(int i = 0; i < 10; i++)
	{
		printf("%d ",i);
	}
	printf("\n Using while loop:\n");
	int count = 0;
	while(count < 10)
	{
		printf("%d ",count);
		count++;
	}
}
