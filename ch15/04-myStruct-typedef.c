#include <stdio.h>

typedef struct myStruct ms;

struct myStruct
{
	char c;
	int x;
	double d;
};

int main(void)
{
	ms s;
	printf("I declared a variable of myStruct type called s\n");
}
