#include <stdio.h>

int main() {
    int n, i;
    float numerator = 1.0, denominator = 2.0, sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    
    for (i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;   
        denominator += 2; 
    }

    
    printf("Sum of the series = %.4f\n", sum);

    return 0;
}
