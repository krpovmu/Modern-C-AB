#include <stdio.h>

int main(void)
{
	enum days
	{
		WEDNESDAY = 3,
		THURSDAY,
		FRIDAY
	};
	enum days d = FRIDAY;
	printf("The enum is: %d\n",d);
}
