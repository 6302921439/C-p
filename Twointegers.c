#include <stdio.h>

void print_table(int num) {
    int i;

    printf("Table of %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    print_table(num);

    return 0;
}
