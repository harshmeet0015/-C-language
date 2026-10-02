day 54
1
#include <stdio.h>

int main() {
    int n, x;
    int total, leftSum;

    scanf("%d", &n);

    total = n * (n + 1) / 2;
    leftSum = 0;

    for (x = 1; x <= n; x++) {
        leftSum += x;

        // Sum from x to n = total - sum(1 to x-1)
        if (leftSum == total - leftSum + x) {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
