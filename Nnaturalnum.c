#include <stdio.h>

int main() {
    int num, sum = 0, i;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Calculate the sum of the first N natural numbers
    for (i = 1; i <= num; i++) {
        sum += i;
    }

    // Output the sum
    printf("The sum of the first %d natural numbers is %d\n", num, sum);

    return 0;
}
