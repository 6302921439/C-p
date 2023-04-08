#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the size of first array: ");
    scanf("%d", &n);
    printf("Enter the size of second array: ");
    scanf("%d", &m);

    int arr1[n], arr2[m], merged[n + m];

    // Input elements of the first array
    for (int i = 0; i < n; i++) {
        printf("Enter element %d of first array: ", i + 1);
        scanf("%d", &arr1[i]);
        merged[i] = arr1[i];
    }

    // Input elements of the second array
    for (int i = 0; i < m; i++) {
        printf("Enter element %d of second array: ", i + 1);
        scanf("%d", &arr2[i]);
        merged[i + n] = arr2[i];
    }

    printf("\nThe merged array is: ");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
