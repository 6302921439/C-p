#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";  // input string
    char *ptr = str;  // pointer to first character of string
    int vowels = 0, consonants = 0;  // initialize counters
    
    // loop through string using pointer and count vowels and consonants
    while (*ptr != '\0') {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' || 
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
            vowels++;
        }
        else if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')) {
            consonants++;
        }
        ptr++;
    }
    
    // print out results
    printf("String: %s\n", str);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    
    return 0;
}
