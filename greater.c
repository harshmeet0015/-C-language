day 56 
1
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Next Greater Elements:\n");

    for (i = 0; i < n; i++) {
        int found = 0;

        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        if (found == 0) {
            printf("-1 ");
        }
    }

    return 0;
}
