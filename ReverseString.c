#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    len = strlen(str);
    j = len - 1;
    
    for (i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }
    
    printf("Reversed string: %s", str);
    return 0;
}
