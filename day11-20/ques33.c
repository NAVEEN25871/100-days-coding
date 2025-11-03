#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, digits = 0;
    int result = 0;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    
    while (num != 0) {
        num = num / 10;
        digits++;
    }

    num = original; 

    
    while (num != 0) {
        remainder = num % 10;
        result += pow(remainder, digits);
        num = num / 10;
    }

    
    if (result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
