#include <stdio.h>

int main() {
    int weekday;

    // Input the weekday number
    printf("Enter the weekday number (1-7): ");
    scanf("%d", &weekday);

    // Print the weekday name using switch statement
    switch (weekday) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid weekday number");
    }

    return 0;
}
