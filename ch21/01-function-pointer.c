#include <stdio.h>

void myFunction()
{
	printf("Function myFunction.\n");
}

int main(void)
{
	void (*fp)();
	fp = myFunction;
	fp();
}
