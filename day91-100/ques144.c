#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

void printStudent(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Roll  : %d\n", s.roll);
    printf("Name  : %s\n", s.name);
    printf("Marks : %.2f\n", s.marks);
}

int main() {
    struct Student st;

    printf("Enter Roll No: ");
    scanf("%d", &st.roll);

    printf("Enter Name: ");
    scanf("%s", st.name);

    printf("Enter Marks: ");
    scanf("%f", &st.marks);

    printStudent(st);

    return 0;
}
