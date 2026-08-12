DAY  1(1)
#include<stdio.h>
int main()
{
int n1,n2,sum;
printf("enter  your num 1");
scanf("%d",&n1);
printf(" enter your num 2 ");
scanf("%d",&n2);
sum=n1+n2;
printf(" therefore the  sum of ywo numbr is :=%d \n ",sum);
return 0;
}
(2)
  #include<stdio.h>
int main()
{
float a,b;
printf("enter two numbers:");
scanf("%f%f",&a,&b);
printf("sum=%.2f\n ",a+b);
printf("difference =%.2f \n",a-b);
printf("product=%.2f\n",a*b);
if (b!=0)
printf("quotient=%.2f\n",a/b);
else
printf("quotient=cannot divide by zero \n");
return 0;
}

