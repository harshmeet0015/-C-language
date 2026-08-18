**day 9**
  (1)
  #include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,t1,t2;
printf("enter your a,b and  c:");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
if(d>0);
{
t1=(-b+sqrt(d))/(2*a);
t2=(-b-sqrt(d))/(2*a);
printf("roots are real and distinct. \n");
printf("roots 1=%.2f\n",t1);
printf("roots of  is =%d.2f \n",t2);
}
else
if(d==0)
{
t1=-b/(2*a);
printf("roots are real and  equal .\n");
printf("root 1=root 2=%.2f \n",t1);
}
else
{
real =-b/(2*a);
imag- sqrt(-d)/(2*a);
printf("roots are imagenary .\n ");
printf("root 1=%.2f+%.2fi\n",real,imag);
printf("root 2=%.2f-%.2fi \n",real,image);
}
return 0;
}
**(2)**
  #include <stdio.h>

int main()
{
    float per:;

    printf("Enter per: ");
    scanf("%f", &per:);

    if (per: >= 90 && per: <= 100)
        printf("Grade A");
    else if (per:>= 80)
        printf("Grade B");
    else if (per: >= 70)
        printf("Grade C");
    else if (per: >= 60)
        printf("Grade D");
    else if (per: >= 0)
        printf("Grade F");
    else
        printf("**Invalid percentage**");

    return 0;
}
