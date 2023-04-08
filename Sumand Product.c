#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int sum = 0, product = 1;

    // Input elements of the array
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);

        // Calculate sum and product
        sum += arr[i];
        product *= arr[i];
    }

    printf("\nSum of all elements = %d\n", sum);
    printf("Product of all elements = %d\n", product);

    return 0;
}

Explanation:

    We start by asking the user to enter the number of elements they want to input.
    We declare an integer array arr of size n to store the elements.
    We also declare two integer variables sum and product and initialize them to 0 and 1 respectively.
    We use a for loop to input each element of the array from the user and simultaneously calculate the sum and product of the elements.
    We print the sum and product using printf after the loop.
    The program then exits.


