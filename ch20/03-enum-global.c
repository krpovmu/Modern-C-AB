#include <stdio.h>

enum Lights
{
	RED,
	BLUE,
	YELLOW,
	GREEN
};

int main(void)
{
	enum Lights el;
	el = GREEN;
	int x = el;
	printf("The value of %d\n",x);

}
