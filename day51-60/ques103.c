#include <stdio.h>

int pivotIndex(int arr[], int n) {
    int totalSum = 0;
   
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            return i;  
        }

        leftSum += arr[i];
    }

    return -1;  
}

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pivot = pivotIndex(arr, n);

    printf("Pivot index: %d\n", pivot);

    return 0;
}
