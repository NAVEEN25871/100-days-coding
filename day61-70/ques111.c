#include <stdio.h>
#define MAX 100000

int queue[MAX];  

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
        if (arr[i] < 0) {
            queue[++back] = i;   
        }
    }

    for (int i = k; i < n; i++) {
   
        if (front <= back)
            printf("%d ", arr[queue[front]]);
        else
            printf("0 ");

        while (front <= back && queue[front] <= i - k)
            front++;

        if (arr[i] < 0)
            queue[++back] = i;
    }

    if (front <= back)
        printf("%d", arr[queue[front]]);
    else
        printf("0");

    return 0;
}
