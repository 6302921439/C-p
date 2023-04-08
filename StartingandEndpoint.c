#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[100];
    int start_pos, end_pos, i, j = 0;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("Enter the starting position: ");
    scanf("%d", &start_pos);
    
    printf("Enter the ending position: ");
    scanf("%d", &end_pos);
    
    for (i = start_pos; i <= end_pos; i++) {
        substr[j++] = str[i];
    }
    
    substr[j] = '\0'; // add null terminator to end the string
    
    printf("Substring from position %d to position %d: %s", start_pos, end_pos, substr);
    
    return 0;
}
