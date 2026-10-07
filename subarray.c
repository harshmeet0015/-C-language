day 
1
#include <stdio.h>

int main() {
    int arr[100], n, k;
    int i, sum = 0, maxSum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    // Sum of first k elements
    for (i = 0; i < k; i++) {
        sum = sum + arr[i];
    }

    maxSum = sum;

    // Slide the window
    for (i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("Maximum sum of subarray of size %d = %d\n", k, maxSum);

    return 0;
}
