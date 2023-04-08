#include <stdio.h>

int main() {
    char str[] = "Hello, world!";  // input string
    char *ptr = str;  // pointer to first character of string
    
    // loop through string using pointer and print each character
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    
    return 0;
}
