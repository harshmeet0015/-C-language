**(day30)**#include <stdio.h>

int main()
{
    int n, i, even = 0, odd = 0;
    int a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}
(2)
  #include <stdio.h>

int main()
{
    int n, i;
    int positive = 0, negative = 0, zero = 0;
    int a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] > 0)
            positive++;
        else if(a[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);
    printf("Zeroes = %d\n", zero);

    return 0;
}
