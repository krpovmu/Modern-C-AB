#include <stdio.h>

typedef char* string;

int main(void)
{
	string str = "Hello!!!";
	for( size_t i = 0 ; i < 10 ; ++i )
	{
		putchar(str[i]);
	}
} 
