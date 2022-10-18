#include <stdio.h>

#define MAX_VALUE 400

int main(void)
{
#if MAX_VALUE == 400
	printf("This part is printed because MACRO is equal to 400\n");
#else
	printf("If macro is not 400 then this part is printed\n");
#endif
}
