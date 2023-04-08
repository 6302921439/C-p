#include<stdio.h>
int main()
{
	char ch;
	char *ptr = NULL;
	*char
		ch = 'A';
	printf("\n\n");
	printf("Before ptr = &ch \n\n");
	printf("value of 'ch' = %c\n\n",ch);
	printf("Address of 'ch' = %c\n\n,&ch);
	printf("Value at Address of 'ch'= %c\n\n,*(&ch));
	ptr = &ch;
	printf("\n\n");
	printf("After ptr = &ch \n\n", ch);
	printf("value of 'ch' = %c\n\n",ptr);
	printf("Address of 'ch'= %c\n\n",*ptr);
	return 0;
}


