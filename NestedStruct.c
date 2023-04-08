#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct employee {
    char name[50];
    int id;
    struct date dob; // nested structure
};

int main() {
    struct employee emp = {"John Doe", 1001, {12, 5, 1990}};
    
    printf("Employee Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.id);
    printf("Date of Birth: %d/%d/%d", emp.dob.day, emp.dob.month, emp.dob.year);
    
    return 0;
}
