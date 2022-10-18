#include <stdio.h>

typedef char* string;

void myFunction(string c, int a)
{
	printf("%s %d\n",c,a);
}

int main(void)
{
	void (*fp)(string, int);
	fp = myFunction;
	fp("This is a message passed to a pointer function and int is:", 123);
}
