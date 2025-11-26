#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int total = n * (n + 1) / 2;

    int x = sqrt(total);

    if (x * x == total)
        printf("%d", x);
    else
        printf("-1");

    return 0;
}
