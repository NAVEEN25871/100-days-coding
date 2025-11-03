#include <stdio.h>

int main() {
    int a[10][10], diag[10];
    int r, c, i, j, k, count = 0, distinct = 1;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    if (r != c) {
        printf("Matrix must be square to check diagonal elements.\n");
        return 0;
    }

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        diag[count++] = a[i][i];
    }

    for (i = 0; i < count; i++) {
        for (j = i + 1; j < count; j++) {
            if (diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }

    if (distinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
