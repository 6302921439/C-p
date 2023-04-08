#include <stdio.h>

int main() {
    int i, j;

    // Loop through numbers 1 to 20
    for (i = 1; i <= 20; i++) {
        // Print the table for the current number
        printf("Table of %d:\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n"); // Add a blank line between tables
    }

    return 0;
}
