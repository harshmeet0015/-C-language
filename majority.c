day 55
  #include <stdio.h>

int main() {
    int n, i, j;
    int count, majority = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        count = 0;

        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > n / 2) {
            majority = arr[i];
            break;
        }
    }

    printf("Majority element = %d\n", majority);

    return 0;
}
