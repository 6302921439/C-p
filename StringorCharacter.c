#include <stdio.h>

int find_length(char str[]) {
    int i;

    for (i = 0; str[i] != '\0'; i++) {}

    return i;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int length = find_length(str);

    printf("Length of the string is %d", length);

    return 0;
}
