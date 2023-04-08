#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        count++;
        num >>= 1;
    }

    printf("Minimum number of bits required to store %d is %d\n", num, count);

    return 0;
}
