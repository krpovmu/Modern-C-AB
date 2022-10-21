#include <stdio.h>

int staticDuration(void)
{
	static int x = 10;
	x ++;
	return x;
}

int automaticDuration(void)
{
	int x = 10;
	x ++;
	return x;
}

int main(void)
{
	printf("Static duration: %d\n",staticDuration());
	printf("Automatic duration: %d\n",automaticDuration());
	printf("Static duration: %d\n",staticDuration());
	printf("Automatic duration: %d\n",automaticDuration());
	printf("Static duration: %d\n",staticDuration());
	printf("Automatic duration: %d\n",automaticDuration());
	printf("Static duration: %d\n",staticDuration());
	printf("Automatic duration: %d\n",automaticDuration());
	printf("Static duration: %d\n",staticDuration());
	printf("Automatic duration: %d\n",automaticDuration());
}
