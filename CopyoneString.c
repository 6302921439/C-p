#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    
    printf("Enter a string: ");
    scanf("%s", str1);
    
    strcpy(str2, str1); // copy str1 to str2
    
    printf("Original string: %s\n", str1);
    printf("Copied string: %s", str2);
    
    return 0;
}

