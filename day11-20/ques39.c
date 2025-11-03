#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;  
    int hasOdd = 0;         

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num < 0) {
        num = -num;
    }

    
    while (num != 0) {
        digit = num % 10;     
        if (digit % 2 != 0) { 
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;            
    }

    if (hasOdd)
        printf("Product of odd digits = %lld\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
