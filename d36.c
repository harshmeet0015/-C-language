**(day 36 )**
  (1)
  #include<stdio.h>
  int main()
  {
  int r,c;
int  first[2][3];
int second[2][3];
for(r=0;r<=1;r++)
{
for(c=0;c<=2;c++)
{
scanf("%d",&first[r][c]);
}
}
for(r=0;r<=1;r++)
{
for(c=0;c<=2;c++)
{
scanf("%d",&second[r][c]);
}
}
for(r=0;r<=1;r++)
{
for(c=0;c<=2;c++)
{
printf("\t %d",first[r][c]);
}
printf("\n");
}
for(r=0;r<=1;r++)
{
for(c=0;c<=2;c++)
{
printf("\t%d",second[r][c]);
}
printf("\n");
}
2
  #include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols, i, j;
    int sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    printf("Sum = %d", sum);

    return 0;
}
