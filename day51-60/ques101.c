#include <stdio.h>

int firstOccurrence(int nums[], int n, int target) {
    int left = 0, right = n - 1, result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid;
            right = mid - 1; 
        }
        else if (nums[mid] > target) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return result;
}

int lastOccurrence(int nums[], int n, int target) {
    int left = 0, right = n - 1, result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid;
            left = mid + 1; 
        }
        else if (nums[mid] > target) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return result;
}

int main() {
    int n, target;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    int first = firstOccurrence(nums, n, target);
    int last = lastOccurrence(nums, n, target);

    printf("First occurrence index: %d\n", first);
    printf("Last occurrence index: %d\n", last);

    return 0;
}
