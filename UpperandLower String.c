#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, n, uppercase_count = 0, lowercase_count = 0;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    n = strlen(str);
    
    for (i = 0; i < n; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            lowercase_count++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            uppercase_count++;
        }
    }
    
    printf("Number of uppercase characters: %d\n", uppercase_count);
    printf("Number of lowercase characters: %d\n", lowercase_count);
    
    return 0;
}
