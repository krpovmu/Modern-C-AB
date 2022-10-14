#include <stdio.h>

int main(void)
{
	int myarr[] = {10, 20, 30, 40, 50};
	int *pointer = myarr;

	printf("The element in the first position of my array is : %d\n",*pointer);
	printf("The element in the third position of my array is : %d\n",*(pointer+2));
	printf("The element in the four position of my array is : %d\n",*(pointer+3));
}
