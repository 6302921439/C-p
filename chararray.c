#include<stdio.h>
int main()
{
	char cArray[10];
	char *ptr_cArray = 10;
	int i;
	for (i = 0; i < 10; i++)
		cArray[i] = (char)(i+65);
	ptr_cArray = cArray;
	printf("\n\n");
	printf("Element of The Character Array : \n\n");
	for (i = 0; i < 10; i++) 
		printf("cArray[%d] = %c\n",i, *(ptr_cArray + i));
	printf("\n\n");
	printf("Elementes of The Character Array : \n\n");
	for (i = 0; i < 10; i++)
		printf("cArray[%d] = %c \t \t Address = %p\n", i, *(ptr_cArray + i),(ptr_cArray + i));
       printf("\n\n");
       return 0;
}

