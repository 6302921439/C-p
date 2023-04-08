#include <stdio.h>

union myUnion {
    int x;
    float y;
    char z;
};

int main() {
    union myUnion u;
    
    u.x = 10; // initialize x
    printf("Value of x: %d\n", u.x);
    
    u.y = 3.14; // initialize y
    printf("Value of y: %f\n", u.y);
    
    u.z = 'A'; // initialize z
    printf("Value of z: %c\n", u.z);
    
    printf("Value of x after initializing z: %d", u.x);
    
    return 0;
}
