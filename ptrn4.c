**(day 26)**
  (1)

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        // Print spaces
        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        // Print numbers
        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

(2)

#include <stdio.h>

int main()
{
    int i;

    // First group
    for (i = 1; i <= 4; i++)
    {
        printf("*\n");
    }

    printf("\n");

    // Second group
    for (i = 1; i <= 5; i++)
    {
        printf("*\n");
    }

    printf("\n");

    // Third group
    for (i = 1; i <= 3; i++)
    {
        printf("*\n");
    }

    printf("\n");

    // Fourth group
    printf("*\n");

    return 0;
}




