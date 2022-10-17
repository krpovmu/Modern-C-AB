#include <stdio.h>

typedef struct
{
	char c;
	int x;
	double d;
}myStruct;

int main(void)
{
	myStruct s1 = {'a', 123, 345.543};
	myStruct *ps1 = &s1;
	printf("Pointer to struct s1\n");
	printf("pointer to s1 variable c: %c\n",(*ps1).c);
	printf("pointer to s1 variable x: %d\n",(*ps1).x);
	printf("pointer to s1 variable d: %.2f\n",(*ps1).d);
}
