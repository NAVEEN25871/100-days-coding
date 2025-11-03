#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swappedNum;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num < 10) {
        printf("Swapped number = %d\n", num);
        return 0;
    }


    digits = (int)log10(num);

    
    first = num / pow(10, digits);
    last = num % 10;

    
    int middle = num % (int)pow(10, digits);
    middle = middle / 10;

    
    swappedNum = last * pow(10, digits) + middle * 10 + first;

    
    printf("Number after swapping first and last digit = %d\n", swappedNum);

    return 0;
}
