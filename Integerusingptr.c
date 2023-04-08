#include <stdio.h>

int main() {
    const int num = 5;  // constant integer
    const int *const ptr = &num;  // constant pointer to constant integer
    
    printf("Before: num = %d\n", *ptr);
    
    int *mutable_ptr = (int*)ptr;  // cast away const-ness of pointer
    
    *mutable_ptr = 10;  // change value indirectly through mutable pointer
    
    printf("After: num = %d\n", *ptr);
    
    return 0;
}
