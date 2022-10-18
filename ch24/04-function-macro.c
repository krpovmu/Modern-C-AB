#include <stdio.h>

#define MIN(a,b)(((a) < (b)) ? (a) : (b))
#define MAX(a,b)(((a) > (b)) ? (a) : (b))

int main(void)
{
	int a = 23345;
	int b = 43455;

	printf("Macro function MIN is %d\n",MIN(a,b));
	printf("Macro function MAX is %d\n",MAX(a,b));
}
