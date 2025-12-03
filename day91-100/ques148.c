#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    float marks;
    char name[20];
};

int areIdentical(struct Student s1, struct Student s2) {
    if (s1.roll == s2.roll &&
        s1.marks == s2.marks &&
        strcmp(s1.name, s2.name) == 0)
    {
        return 1; 
    }
    return 0; 
}

int main() {
    struct Student a, b;

    printf("Enter details of Student 1:\n");
    printf("Roll: ");
    scanf("%d", &a.roll);
    printf("Name: ");
    scanf("%s", a.name);
    printf("Marks: ");
    scanf("%f", &a.marks);

    printf("\nEnter details of Student 2:\n");
    printf("Roll: ");
    scanf("%d", &b.roll);
    printf("Name: ");
    scanf("%s", b.name);
    printf("Marks: ");
    scanf("%f", &b.marks);

    if (areIdentical(a, b)) {
        printf("\nBoth structures are IDENTICAL.\n");
    } else {
        printf("\nStructures are NOT identical.\n");
    }

    return 0;
}
