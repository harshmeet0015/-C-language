**(day 26)**
  (1)
#include <stdio.h>

int main()
{
    int i, j;

    // Increasing stars
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Decreasing stars
    for (i = 4; i >= 1; i--)
    {
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
(2)
#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        // Print spaces
        for (j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (i = 3; i >= 1; i--)
    {
        // Print spaces
        for (j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}


