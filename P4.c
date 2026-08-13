**DAY 4(1)**
#include<stdio.h>
int main()
{
int a,b ;
printf("enter your first variable:-");
scanf("%d",&a);
printf("enter your second vriable");
scanf("%d",&b);
printf("bfore  swapping");
a=a+b;
b=a-b;
a=a-b;
printf("after swappingn\n ");
printf("a=%d\n ",a);
printf("b=%d \n",b);
return 0;
}

**(2)**
#include<stdio.h>
int main()
{
int num,i,sum=0;
printf(" enter your numbr:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
sum=sum+i;
}
printf("sum of first %d natural number exist =%d",num,sum);
return 0;
}
