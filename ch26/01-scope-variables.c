#include <stdio.h>

void myFunction(void)
{
	int x = 10;
	printf("The X value in function myFunction is: %d\n",x);
}	

int main(void)
{
	myFunction();
	int x = 20;
	printf("The X value in function Main is: %d\n",x);
}
