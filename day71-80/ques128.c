#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100], ch;
    int vowels = 0, consonants = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {  
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
