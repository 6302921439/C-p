#include <stdio.h>

int main() {
    int num, i;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for leap years from 1 to N
    printf("Leap years between 1 and %d are: ", num);
    for (i = 1; i <= num; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            printf("%d ", i);
        }
    }

    return 0;
}
