#include <stdio.h>

#define MAX 100000

int deque[MAX];  // will store indices

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    int front = 0, back = -1;

    for (int i = 0; i < k; i++) {
        while (front <= back && arr[deque[back]] <= arr[i])
            back--;

        deque[++back] = i;
    }

    for (int i = k; i < n; i++) {
       
        printf("%d ", arr[deque[front]]);

        while (front <= back && deque[front] <= i - k)
            front++;

        while (front <= back && arr[deque[back]] <= arr[i])
            back--;

        deque[++back] = i;
    }

    printf("%d", arr[deque[front]]);

    return 0;
}
