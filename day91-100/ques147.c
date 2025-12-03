#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};

int main() {
    struct Employee emp_write, emp_read;
    FILE *fp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp_write.id);

    printf("Enter Name: ");
    scanf("%s", emp_write.name);

    printf("Enter Salary: ");
    scanf("%f", &emp_write.salary);

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(&emp_write, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nData written to binary file successfully.\n");

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&emp_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\n--- Employee Details Read From File ---\n");
    printf("ID      : %d\n", emp_read.id);
    printf("Name    : %s\n", emp_read.name);
    printf("Salary  : %.2f\n", emp_read.salary);

    return 0;
}
