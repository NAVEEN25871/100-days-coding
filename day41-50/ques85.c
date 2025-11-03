#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i, j, length = 0;

    printf("Enter a string: ");
    gets(str); 

    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        rev[j] = str[i];
    }
    rev[j] = '\0';  

    printf("Reversed string: %s\n", rev);

    return 0;
}
