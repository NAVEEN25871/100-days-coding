#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k > n) {
        printf("-1");
        return 0;
    }

    int currentSum = 0;
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }

    int maxSum = currentSum;

    for (int i = k; i < n; i++) {
        currentSum = currentSum - arr[i - k] + arr[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("%d", maxSum);

    return 0;
}
