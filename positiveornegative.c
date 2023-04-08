#include <stdio.h>

int main() {
    int num;
    char choice;

    do {
        // Input the number
        printf("Enter a number: ");
        scanf("%d", &num);

        // Check if the number is zero, positive or negative
        if (num == 0) {
            printf("The entered number is ZERO.\n");
        } else if (num > 0) {
            printf("The entered number is POSITIVE.\n");
        } else {
            printf("The entered number is NEGATIVE.\n");
        }

        // Ask the user if they want to continue
        printf("Do you want to check another number? (y/n) ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
