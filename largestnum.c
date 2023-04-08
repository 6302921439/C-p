#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the maximum number
    max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    // Output the maximum number
    printf("The largest number is %d", max);

    return 0;
}
