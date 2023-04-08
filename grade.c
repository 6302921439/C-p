#include <stdio.h>

int main()
{
    int marks1, marks2, marks3, marks4, marks5, total;
    float percentage;

    printf("Enter the marks obtained in subject 1: ");
    scanf("%d", &marks1);
    printf("Enter the marks obtained in subject 2: ");
    scanf("%d", &marks2);
    printf("Enter the marks obtained in subject 3: ");
    scanf("%d", &marks3);
    printf("Enter the marks obtained in subject 4: ");
    scanf("%d", &marks4);
    printf("Enter the marks obtained in subject 5: ");
    scanf("%d", &marks5);

    total = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = (float)total / 5;

    printf("Total marks obtained: %d\n", total);
    printf("Percentage obtained: %.2f%%\n", percentage);

    if (percentage >= 90)
    {
        printf("Grade: A+\n");
    }
    else if (percentage >= 80)
    {
        printf("Grade: A\n");
    }
    else if (percentage >= 70)
    {
        printf("Grade: B+\n");
    }
    else if (percentage >= 60)
    {
        printf("Grade: B\n");
    }
    else if (percentage >= 50)
    {
        printf("Grade: C\n");
    }
    else
    {
        printf("Grade: F\n");
    }

    return 0;
}
