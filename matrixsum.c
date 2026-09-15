day 37
  1
#include <stdio.h>

int main()
{
    int a[10][10], sum[10];
    int rows, cols, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        sum[i] = 0;

        for (j = 0; j < cols; j++)
        {
            sum[i] = sum[i] + a[i][j];
        }
    }

    printf("Sum of each row:\n");
    for (i = 0; i < rows; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}
2
  #include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Transpose of matrix:\n");
    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
