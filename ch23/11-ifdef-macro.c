#include <stdio.h>

#define MY_MACRO

int main(void)
{
#ifdef MY_MACRO
	printf("My macro is defined.\n");
#endif

#ifdef NON_EXIST_MACRO
	printf("This part should not be printed because that macro doesn't exist.\n");
#endif
}
