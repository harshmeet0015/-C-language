day 53 
(1)
#include <stdio.h>

int main() {
    int n, i;
    int totalSum = 0, leftSum = 0;
    int pivot = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    for (i = 0; i < n; i++) {
        // Right sum = total sum - left sum - current element
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            pivot = i;
            break;  // leftmost pivot index
        }

        leftSum += arr[i];
    }

    printf("Pivot index = %d\n", pivot);

    return 0;
}
