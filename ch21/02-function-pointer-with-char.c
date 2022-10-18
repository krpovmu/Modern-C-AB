#include <stdio.h>

typedef char* string;

void myFunction(string c)
{
	printf("%s\n",c);
}

int main(void)
{
	void (*fp)(string);
	fp = myFunction;
	fp("This is a message passed to a pointer function");
}
