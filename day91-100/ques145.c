#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];   
}

int main() {
    int n, i;
    struct Student students[50], topper;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Roll: ");
        scanf("%d", &students[i].roll);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    topper = getTopStudent(students, n);

    printf("\n--- Top Student Details ---\n");
    printf("Roll  : %d\n", topper.roll);
    printf("Name  : %s\n", topper.name);
    printf("Marks : %.2f\n", topper.marks);

    return 0;
}
