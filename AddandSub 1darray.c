#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sum[n], diff[n];

    // Input elements of the first array
    printf("Enter the elements of first array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input elements of the second array
    printf("Enter the elements of second array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Add the elements of both arrays
    printf("\nThe sum of both arrays is: ");
    for (int i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
        printf("%d ", sum[i]);
    }

    // Subtract the elements of both arrays
    printf("\nThe difference of both arrays is: ");
    for (int i = 0; i < n; i++) {
        diff[i] = arr1[i] - arr2[i];
        printf("%d ", diff[i]);
    }

    return 0;
}

