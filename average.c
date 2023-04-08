#include<stdio.h>
#include<sum.h>
#include<average.h>

int main()
{
	int num1,num2,sum;
	float avg;
	printf("Enter the first number : ");
	scanf("%d",&num1);
	printf("Enter the second number : ");
	scanf("%d",&num2);

	sum = calculate_sum(num1,num2,sum);
	avg = calculate_average(num1,num2);

	printf("The sum of %d and %d is %d\n",num1,num2,sum);
	printf("The average of %d and %d is %2f\n", num1,num2,avg);
	return 0;
}
