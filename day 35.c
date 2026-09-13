day 35
1
#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, second;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = a[0];
    second = a[0];

    for (i = 1; i < n; i++)
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

    printf("%d", second);

    return 0;
}
2
#include <stdio.h>

int main()
{
    int a[100], n, k, i, j, temp;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    k = k % n;

    for (i = 1; i <= k; i++)
    {
        temp = a[n - 1];

        for (j = n - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }

        a[0] = temp;
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
