(day  32)
(1)
#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n, m, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n; i++)
        c[i] = a[i];

    for (i = 0; i < m; i++)
        c[n + i] = b[i];

    for (i = 0; i < n + m; i++)
        printf("%d ", c[i]);

    return 0;
}
(2)
#include <stdio.h>

int main()
{
    int n, digit, count[10] = {0};
    int i, max = 0, result = 0;

    scanf("%d", &n);

    if (n == 0)
        count[0]++;

    while (n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}
