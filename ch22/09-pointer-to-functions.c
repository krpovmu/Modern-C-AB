#include <stdio.h>

typedef char* string;

void printMessage(string s, int x)
{
	printf("%s %d\n",s,x);
}

int main(void)
{
	string message = "This is the string and the int is: ";
	int a = 123;

	void (*fp)(string, int);
	fp = printMessage;
	fp(message,a);
}
