**day 39**
1
#include <stdio.h>

int main() {
    int a[10][10], r, c;
    int i, j, distinct = 1;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check main diagonal elements
    for (i = 0; i < r; i++) {
        for (j = i + 1; j < r; j++) {
            if (a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
    }

    if (distinct)
        printf("True");
    else
        printf("False");

    return 0;
}
2
#include <stdio.h>

int main() {
    int a[10][10], n;
    int i, j, sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum = sum + a[i][i];
    }

    printf("%d", sum);

    return 0;
}
