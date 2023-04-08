#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    length = strlen(str);
    
    printf("Length of the string is: %d", length);
    
    return 0;
}
