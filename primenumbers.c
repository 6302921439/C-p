#include <stdio.h>

int main() {
    int num, i, j, flag;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for prime numbers from 1 to N
    printf("Prime numbers between 1 and %d are: ", num);
    for (i = 2; i <= num; i++) {
        flag = 1; // assume number is prime
        for (j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                flag = 0; // number is not prime
                break;
            }
        }
        if (flag == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
