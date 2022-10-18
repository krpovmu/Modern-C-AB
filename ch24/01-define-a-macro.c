#include <stdio.h>

#define MY_MACRO 999

int main(void)
{
#ifdef MY_MACRO
	printf("Macro defined creating variable.\n");
	int x = MY_MACRO;
	printf("Values of x variable and thus macro MY_MACRO is : %d\n",x);
#endif

#undef MY_MACRO
#ifndef MY_MACRO
	printf("In line %d macro was empty\n",__LINE__);
#define MY_MACRO 2345
#endif

#ifdef MY_MACRO
	printf("Now Macro has another value.\n");
	x = MY_MACRO;
	printf("Values of x variable and thus macro MY_MACRO is : %d\n",x);
#endif

}
