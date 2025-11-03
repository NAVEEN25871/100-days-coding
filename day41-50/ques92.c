#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};  
    int i, index = -1;

    printf("Enter a string (lowercase letters only): ");
    gets(str); 

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int pos = str[i] - 'a'; 
            freq[pos]++;

            if (freq[pos] == 2) {   // 
                index = i;
                break;
            }
        }
    }

    if (index != -1)
        printf("First repeating lowercase alphabet: %c\n", str[index]);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
