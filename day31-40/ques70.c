#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[100]; 
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n;

    int temp[100];

    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    for (i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Array after rotating right by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
