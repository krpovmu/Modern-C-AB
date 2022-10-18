#include <stdio.h>

enum colors
{
	RED,
	BLUE,
	YELLOW,
	GREEN,
	BROWN,
	GRAY
};

int main(void)
{
	enum colors cl;
	cl = YELLOW;
	switch(cl)
	{
	case RED:
		printf("Color is RED number is: %d\n",cl);
		break;
	case BLUE:
		printf("Color is BLUE number is: %d\n",cl);
		break;
	case YELLOW:
		printf("Color is YELLOW number is: %d\n",cl);
		break;
	case GREEN:
		printf("Color is GREEN number is: %d\n",cl);
		break;
	case BROWN:
		printf("Color is BROWN number is: %d\n",cl);
		break;
	case GRAY:
		printf("Color is GRAY number is: %d\n",cl);
		break;
	default:
		printf("Color is not in the enum\n");
		break;
	}
}
