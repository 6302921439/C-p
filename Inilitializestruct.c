#include <stdio.h>

struct student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    struct student s = {"John", 20, 3.5};
    
    printf("Student Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("GPA: %.2f", s.gpa);
    
    return 0;
}

