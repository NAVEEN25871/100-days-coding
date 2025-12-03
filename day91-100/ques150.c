#include <stdio.h>

struct Student {
    int roll;
    float marks;
    char name[20];
};

int main() {
    struct Student s1 = {0};   
    struct Student *ptr;       

    ptr = &s1;                 

    printf("Enter Roll No: ");
    scanf("%d", &ptr->roll);

    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", ptr->roll);
    printf("Name   : %s\n", ptr->name);
    printf("Marks  : %.2f\n", ptr->marks);

    return 0;
}
