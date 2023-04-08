#include <stdio.h>

struct distance {
    int feet;
    int inches;
};

int main() {
    struct distance d1, d2, result;
    
    printf("Enter first distance in feet and inches:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%d", &d1.inches);
    
    printf("Enter second distance in feet and inches:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%d", &d2.inches);
    
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
    
    // convert inches to feet if greater than or equal to 12
    if (result.inches >= 12) {
        result.feet++;
        result.inches -= 12;
    }
    
    printf("Total distance: %d feet %d inches", result.feet, result.inches);
    
    return 0;
}
