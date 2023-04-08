#include <stdio.h>

struct student {
    char name[50];
    int roll_no;
};

int main() {
    struct student s1 = {"John Doe", 101};
    struct student *ptr;
    ptr = &s1;
    
    printf("Name: %s\n", (*ptr).name);
    printf("Roll Number: %d\n", (*ptr).roll_no);
    
    return 0;
}
