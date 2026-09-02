**(day 22)**
  (1)
  #include <stdio.h>

int main()
{
    int n, temp, digit, i;
    int sum = 0, fact;

    scanf("%d", &n);

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;

        fact = 1;
        for (i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == n)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}
(2)

  #include <stdio.h>

int main()
{
    int n, i;
    float sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + (float)(2 * i - 1) / (2 * i);
    }

    printf("%.2f", sum);

    return 0;
}
