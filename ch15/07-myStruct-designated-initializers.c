#include <stdio.h>

typedef struct
{
	char c;
	int x;
	double d;

}myStruct;

int main(void)
{
	myStruct s = {.c = 'a', .x = 3456, .d = 3456.678};
	printf("Variables in myStruct are:\n");
	printf("First element:%c\n",s.c);
	printf("Second element:%d\n",s.x);
	printf("Third element:%.2f\n",s.d);
}
