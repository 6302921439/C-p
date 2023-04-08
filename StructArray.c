#include <stdio.h>

struct student {
    char name[50];
    int roll_no;
};

int main() {
    struct student class[3] = {
        {"John Doe", 101},
        {"Jane Smith", 102},
        {"Bob Johnson", 103}
    };
    
    for(int i = 0; i < 3; i++) {
        printf("Name: %s\n", class[i].name);
        printf("Roll Number: %d\n", class[i].roll_no);
    }
    
    return 0;
}

