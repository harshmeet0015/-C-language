**(day 35)**
  1
  #include <stdio.h>

int main()
{
    int n, i;
    int a[100];
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = second = -999999;

    for (i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("Second largest = %d", second);

    return 0;
}
2
#include <stdio.h>

int main()
{
    int n, k, i, j, temp;
    int a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    for (j = 1; j <= k; j++)
    {
        temp = a[n - 1];

        for (i = n - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }

        a[0] = temp;
    }

    printf("Array after rotation: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
