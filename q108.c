day 108 
1
#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Calculate product of all elements except nums[i]
    for (int i = 0; i < n; i++) {
        answer[i] = 1;

        for (int j = 0; j < n; j++) {
            if (i != j) {
                answer[i] *= nums[j];
            }
        }
    }

    printf("Answer array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }

    return 0;
}
