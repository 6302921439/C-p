#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char words[10][10]; // assuming no more than 10 words, each with 10 characters
    int i, j, k, n;
    
    printf("Enter a string: ");
    scanf("%[^\n]s", str); // read in the entire string until newline
    
    n = strlen(str);
    j = 0;
    k = 0;
    
    for (i = 0; i <= n; i++) {
        if (str[i] == ' ' || str[i] == '\0') { // if space or end of string
            words[j][k] = '\0'; // terminate the current word
            j++;
            k = 0;
        } else {
            words[j][k] = str[i];
            k++;
        }
    }
    
    printf("Words in the string:\n");
    for (i = 0; i < j; i++) {
        printf("%s\n", words[i]);
    }
    
    return 0;
}
