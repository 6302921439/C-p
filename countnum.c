#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        if (num & 1)
            count++;
        num >>= 1;
    }

    printf("Number of 1's in %d is %d\n", num, count);

    return 0;
}
