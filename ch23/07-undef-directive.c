#include <stdio.h>

#define MAX 100


int main(void)
{
	int x = MAX;
	printf("The value of variable that is equal to de define is: %d\n",x);
#undef MAX
	printf("The directive define MAX was undef\n");
}
