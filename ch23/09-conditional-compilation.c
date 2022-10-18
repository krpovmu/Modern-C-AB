#include <stdio.h>
#define FLAG 465

int main(void)
{
#if FLAG < 123
	printf("This portion of code is (A)\n");
	printf("And it's likely that the condition doesn't let to compile\n");
#endif
	printf("This portion of code is (B)\n");
	printf("And it's likely that the condition let to compile\n");
}
