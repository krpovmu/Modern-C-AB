#include <stdio.h>

// function declaration
int sumNum(int, int);


int main(void)
{
	printf("The result is: %d\n",sumNum(345,654));
}

// function definition
int sumNum(int x, int y)
{
	return x + y;
}
