#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // input array
    int size = sizeof(arr) / sizeof(int);  // get size of array
    int rev_arr[size];  // create new array for reversed elements
    
    // loop through input array in reverse order and add elements to new array
    for (int i = size - 1; i >= 0; i--) {
        rev_arr[size - 1 - i] = arr[i];
    }
    
    // print out original and reversed arrays
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", rev_arr[i]);
    }
    
    return 0;
}
