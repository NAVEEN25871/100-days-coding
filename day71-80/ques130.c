#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);


        size_t len = strlen(students[i].name);
        if (len > 0 && students[i].name[len - 1] == '\n')
            students[i].name[len - 1] = '\0';

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %d %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }

    fclose(fp);
    printf("\nStudent records saved to students.txt\n");

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nReading student records from file:\n");
    struct Student s;
    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    return 0;
}
