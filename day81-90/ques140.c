#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p1 = {"Alice", 25, FEMALE};

    const char *genderNames[] = {"Male", "Female", "Other"};

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Gender: %s\n", genderNames[p1.gender]);

    return 0;
}
