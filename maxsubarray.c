day
1
```c
#include <stdio.h>

int main() {
    int n, k, i;
    int arr[100];
    int sum = 0, maxSum;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of k");
        return 0;
    }

    // Calculate sum of first subarray
    for (i = 0; i < k; i++) {
        sum += arr[i];
    }

    maxSum = sum;

    // Slide the window
    for (i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("Maximum subarray sum = %d\n", maxSum);

    return 0;
}
```
