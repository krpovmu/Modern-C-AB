#include <stdio.h>

struct myStruct
{
	char c;
	int x;
	double d;
};

int main(void)
{
	printf("This is my first struct in my entire life, damn it is sooo good.\n");
	struct myStruct s;
	printf("I declared a variable of myStruct type called s\n");
}
