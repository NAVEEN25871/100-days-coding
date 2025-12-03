#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[20];
    float salary;
    struct Date join;   
};

int main() {
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("Enter Joining Date (day month year): ");
    scanf("%d %d %d", &e.join.day, &e.join.month, &e.join.year);

    printf("\n--- Employee Details ---\n");
    printf("ID          : %d\n", e.id);
    printf("Name        : %s\n", e.name);
    printf("Salary      : %.2f\n", e.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           e.join.day, e.join.month, e.join.year);

    return 0;
}
