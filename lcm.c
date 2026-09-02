**(1)**
   #include <stdio.h>

int main() {
    int a, b, max, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM = %d\n", lcm);

    return 0;
}
**(2)**
  #include<stdio.h>
int main()
{
int n,digit ,sum=0;
printf("enter your number ");
scanf(" %d",&n);
while(n>0)
{
digit=n%10;
sum=sum+digit;
n=n/10;
}
printf("sum of number is %d",sum);
return 0;
}
