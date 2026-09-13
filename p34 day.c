**( day 34)**
(1)
#include <stdio.h>

int main()
{
    int a[100], n, key;
    int low, high, mid;
    int found = -1, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            found = mid;
            break;
        }
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("%d", found);

    return 0;
}
(2)
#include <stdio.h>

int main()
{
    int a[100], n, x, i, pos;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    pos = n;

    for (i = 0; i < n; i++)
    {
        if (a[i] > x)
        {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--)
        a[i] = a[i - 1];

    a[pos] = x;
    n++;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
