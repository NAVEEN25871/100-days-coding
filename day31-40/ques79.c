#include <stdio.h>

int main() {
    int a[10][10], n, i, j;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal Traversal (Main and Secondary):\n");

    printf("Main diagonal: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i][i]);
    }

    printf("\nSecondary diagonal: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i][n - i - 1]);
    }

    printf("\n");

    return 0;
}
