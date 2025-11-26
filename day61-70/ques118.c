#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSum = n * (n + 1) / 2;

    int sumArr = 0;
    for (int i = 0; i < n; i++) {
        sumArr += arr[i];
    }

    int missing = totalSum - sumArr;
    printf("%d", missing);

    return 0;
}
