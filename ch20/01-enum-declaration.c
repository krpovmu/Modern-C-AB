#include <stdio.h>

int main(void)
{
	enum myEnum
	{
		FIRST,
		SECOND,
		THIRD
	};

	enum myEnum me;
	me = SECOND;
	printf("Value of the enum is: %d\n",me);
}
