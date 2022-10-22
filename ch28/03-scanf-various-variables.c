#include <stdio.h>

int main(void)
{

	printf("please type an int and a double:");
	int x;
	double d;
	scanf("%d %lf",&x,&d);
	printf("your int was %d and your double was %.2lf\n",x,d);
}
