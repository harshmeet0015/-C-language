**(day 21)**
(1)

#include <stdio.h>

int main()
{
    int n, first, last, digits, power, middle, result;

    scanf("%d", &n);

    last = n % 10;

    power = 1;
    digits = n;

    while (digits >= 10)
    {
        digits = digits / 10;
        power = power * 10;
    }

    first = digits;

    middle = n % power;
    middle = middle / 10;

    result = last * power + middle * 10 + first;

    printf("%d", result);

    return 0;
}


(2)


#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

    return 0;
}
