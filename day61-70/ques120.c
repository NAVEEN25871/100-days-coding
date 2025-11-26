#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);  

    int n = strlen(str);

    if (isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    for (int i = 1; i < n; i++) {
        str[i] = tolower(str[i]);
    }

    printf("%s", str);

    return 0;
}
