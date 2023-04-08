#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int rollno;
    float marks;
};

int main() {
    struct student *ptr;
    int i, n;
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    // allocate memory for array of n student structures
    ptr = (struct student*) malloc(n * sizeof(struct student));
    
    for (i = 0; i < n; i++) {
        printf("Enter name, roll no, and marks for student %d: ", i+1);
        scanf("%s %d %f", (ptr+i)->name, &(ptr+i)->rollno, &(ptr+i)->marks);
    }
    
    printf("\n");
    
    // print out student details using pointer
    for (i = 0; i < n; i++) {
        printf("Details of student %d:\n", i+1);
        printf("Name: %s\n", (ptr+i)->name);
        printf("Roll no: %d\n", (ptr+i)->rollno);
        printf("Marks: %.2f\n", (ptr+i)->marks);
    }
    
    // free allocated memory
    free(ptr);
    
    return 0;
}
