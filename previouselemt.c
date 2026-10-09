day 57
1
#include<stdio.h>
int main ()
{
int n,i,j,a[100],found;
printf("enter hyour size");
scanf("%d",&n);
printf("enter elements ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
found=-1;
for(j=i-1;j=0;j--)
{
if(a[j]>a[i])
{
found=a[j];
break;
}
}
ptintf("%d",found );
if(i<n-1)
printf(,");
}
return 0;
}
