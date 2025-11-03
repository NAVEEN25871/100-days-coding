#include <stdio.h>

int main() {
    char str[100];
    int i, j, length = 0, flag = 1;

    printf("Enter a string: ");
    gets(str); 

    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
