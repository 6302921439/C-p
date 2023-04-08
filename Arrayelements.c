#include <stdio.h>

void find_sum(int arr[], int size, int *sum) {
    int i;

    for (i = 0; i < size; i++) {
        *sum += arr[i];
    }
}

int main() {
    int arr[100], i, size, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements in the array:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    find_sum(arr, size, &sum);

    printf("Sum of all elements in the array is %d", sum);

    return 0;
}
