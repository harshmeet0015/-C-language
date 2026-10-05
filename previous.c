day 57
1
#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous Greater Elements:\n");

    for (int i = 0; i < n; i++) {
        int pge = -1;

        // Search on the left side
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                pge = arr[j];
                break;  // nearest greater element found
            }
        }

        printf("%d ", pge);
    }

    return 0;
}
