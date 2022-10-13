#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;
	printf("The value of variables x and y are: %d %d before changing\n",x,y);  
	
	int *p;
	p = &x;
	*p = 100;

	p = &y;
	*p = 200;
	
	printf("The value of variables x and y are: %d %d after changing\n",x,y);  
}
