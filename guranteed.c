day58
1

#include <stdio.h>

int main() {
    int n, i;
    int nums[100], answer[100];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Calculate product of elements on the left
    int product = 1;

    for (i = 0; i < n; i++) {
        answer[i] = product;
        product = product * nums[i];
    }

    // Multiply by product of elements on the right
    product = 1;

    for (i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * product;
        product = product * nums[i];
    }

    printf("Answer array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }

    return 0;
}
