**(day 29)**
(1)
#include<stdio.h>
int main()
{
int n,i,sum=0;
int a[100];
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("%d",sum);
return 0;
}
(2)
#include<stdio.n>
int main()
{
int n,i;
int a[100];
int max,min;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
min=[0];
for(i=1;i<=n;i++)
{
if(a[i]>max)
min=a[i];
if(a[i]<min)
min=a[i];
}
printf("maximun");
printf("minimum");
return 0;
}
