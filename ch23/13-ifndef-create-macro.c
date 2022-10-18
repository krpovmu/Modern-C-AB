#include <stdio.h>

int main(void)
{
#ifndef SHIT_MACRO
#define SHIT_MACRO
#ifdef SHIT_MACRO
	printf("Now the macro SHIT_MACRO is defined\n");
#endif
#endif
}
