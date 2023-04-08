#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, n;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    n = strlen(str);
    
    for (i = 0; i < n; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') { // lowercase letter
            str[i] = str[i] - 'a' + 'A'; // toggle to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') { // uppercase letter
            str[i] = str[i] - 'A' + 'a'; // toggle to lowercase
        }
    }
    
    printf("Toggled string: %s", str);
    
    return 0;
}

