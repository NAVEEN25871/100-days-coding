 #include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    float salary;
    char name[20];
};

int main() {
    struct Employee *emp;

    emp = (struct Employee *)malloc(sizeof(struct Employee));

    if (emp == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp->id);

    printf("Enter Name: ");
    scanf("%s", emp->name);

    printf("Enter Salary: ");
    scanf("%f", &emp->salary);

    printf("\n--- Employee Details ---\n");
    printf("ID      : %d\n", emp->id);
    printf("Name    : %s\n", emp->name);
    printf("Salary  : %.2f\n", emp->salary);

    free(emp);

    return 0;
}
