#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i, len, lastSpace = -1;

    printf("Enter your full name: ");
    gets(name);  

    len = strlen(name);

    for (i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastSpace = i;
            break;
        }
    }

    printf("Result: ");

    if (name[0] != ' ')
        printf("%c. ", toupper(name[0]));

    for (i = 1; i < lastSpace; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ')
            printf("%c. ", toupper(name[i]));
    }

    if (lastSpace != -1)
        printf("%s\n", &name[lastSpace + 1]);
    else
        printf("%s\n", name);  

    return 0;
}
