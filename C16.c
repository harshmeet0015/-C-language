**(day 16)**
#include <stdio.h>

int main()
{
    int num, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        remainder = num % 10;
        sum = sum + (remainder * remainder * remainder);
        num = num / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.", original);
    else
        printf("%d is not an Armstrong number.", original);

 return 0;
 }

**(2)**
#include<stdio.h>
int main()
{
int n,i ,coun=0;
printf("enter your number ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
printf("%d is a prime numbe r",n);
else
printf("%d is not  a prime number",n);
return 0;
}
