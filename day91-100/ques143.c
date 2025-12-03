#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s[50];
    int n, i, topIndex = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    printf("\n--- Student With Highest Marks ---\n");
    printf("Roll  : %d\n", s[topIndex].roll);
    printf("Name  : %s\n", s[topIndex].name);
    printf("Marks : %.2f\n", s[topIndex].marks);

    return 0;
}
