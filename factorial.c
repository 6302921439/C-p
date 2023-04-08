include <stdio.h>

int main() {
    int num, i, fact = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the factorial
    for (i = 1; i <= num; i++) {
        fact *= i;
    }

    // Output the factorial
    printf("The factorial of %d is %d\n", num, fact);

    return 0;
}
