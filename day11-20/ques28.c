#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; 
    int found = 0; 

    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            product *= i;
            found = 1;
        }
    }

    if (found)
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    else
        printf("No even numbers in the given range.\n");

    return 0;
}
