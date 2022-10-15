#include <stdio.h>

int myFunction(int x, int y)
{
	return x + y;
}

int main(void)
{
	int myVar = 89;
	int myVar2 = 8765;
	printf("La suma de los 2 valores es: %d\n",myFunction(myVar,myVar2));
}
