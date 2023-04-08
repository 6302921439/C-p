#include<stdio.h>
int main()
{
	int X[5] = {1,2,3,4,5};
	int* ptr;
	ptr = &X[2];
	printf("*ptr = %d \n", *ptr);
	printf("*(ptr+1) = %d \n", *(ptr+1));
	printf("*(ptr-1) = %d", *(ptr-1));
	return 0;

}
