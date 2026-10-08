day 56
```c
#include <stdio.h>

int main() {
    int arr[100], n;
    int i, j, found;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Next Greater Elements:\n");

    for (i = 0; i < n; i++) {
        found = 0;

        // Check elements on the right
        for (j = i + 1; j < n; j++) {

            if (arr[j] > arr[i]) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        // If no greater element is found
        if (found == 0) {
            printf("-1 ");
        }
    }

    return 0;
}
```

