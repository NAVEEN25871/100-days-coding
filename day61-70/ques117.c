#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int arr1[m], arr2[n];
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Merge both arrays
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    // Copy remaining elements of arr1
    while (i < m)
        merged[k++] = arr1[i++];

    // Copy remaining elements of arr2
    while (j < n)
        merged[k++] = arr2[j++];

    // Print merged array
    for (int x = 0; x < m + n; x++) {
        if (x == m + n - 1)
            printf("%d", merged[x]);
        else
            printf("%d ", merged[x]);
    }

    return 0;
}
