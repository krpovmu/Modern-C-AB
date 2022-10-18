#include <stdio.h>
#define FLAG 465

int main(void)
{
#if FLAG < 123
	printf("This portion of code is (A)\n");
#elif FLAH == 123
	printf("This portion of code is (B)\n");
#else
	printf("This portion of code is (C)\n");
#endif
}
