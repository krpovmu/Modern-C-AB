#include <stdio.h>

int x = 100;

void printGlobal(void)
{
	printf("The global value of x on printGlobal function is: %d\n",x);
}

int main(void)
{
	printf("The global value of x on main function is: %d\n",x);
	printGlobal();
}
