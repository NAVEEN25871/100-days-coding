#include <stdio.h>

struct Student {
    char name[20];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Details ---\n");
    printf("Name      : %s\n", s.name);
    printf("Roll No   : %d\n", s.roll_no);
    printf("Marks     : %.2f\n", s.marks);

    return 0;
}
