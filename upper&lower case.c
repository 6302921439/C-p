#include <stdio.h>

int main() {
    char ch;

    printf("Lowercase alphabets are:\n");
    for (ch = 'a'; ch <= 'z'; ch++) {
        printf("%c ", ch);
    }

    printf("\n\nUppercase alphabets are:\n");
    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c ", ch);
    }

    return 0;
}
