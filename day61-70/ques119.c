#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    long long sumArr = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sumArr += arr[i];  
    }

    long long expectedSum = (long long)(n - 1) * n / 2;

    int repeated = sumArr - expectedSum;
    printf("%d", repeated);

    return 0;
}
