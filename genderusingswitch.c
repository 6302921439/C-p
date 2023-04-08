#include <stdio.h>

int main() {
    char gender;

    // Input the gender
    printf("Enter the gender (M/F): ");
    scanf(" %c", &gender);

    // Print the corresponding gender using switch statement
    switch (gender) {
        case 'M':
        case 'm':
            printf("Male");
            break;
        case 'F':
        case 'f':
            printf("Female");
            break;
        default:
            printf("Invalid gender");
    }

    return 0;
}
