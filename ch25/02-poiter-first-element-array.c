#include <stdio.h>

int main(void)
{
	int arr[] = {1,2,3,4,5,6,7,8,9,0};
	int *arrp = arr;
	printf("Pointer has the address %p and point to the element arr[0] which is:%d\n",arrp,*arrp);
}
