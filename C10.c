**day 10**
(1)
#include<stdio.h>
int main()
{
int s1,s2,s3;
printf(" enter your sides of triangles:-");
scanf("%d%d%d",&s1,&s2,&s3);
if(s1==s2&&s2==s1)
{
printf("triangles is equilateral \n");
}
else 
if(s1==s2||s2==s3||s3==s1)
{
printf(" isssocles triangle");
}
else
{
printf("scalene traingles");
}
return 0;
}
**(2)**
include<stdio.h>
int main()
{
int  ch,d;
printf(" enter your choice :-");
scanf("%d",&ch);
for(d=1;d<=7;d++)
switch(ch)
{
case  1:
if(d==1)
printf("monday");
break;
case  2:
if(d==2)
printf(" tuesday");
break;
case 3:
if(d==3)
printf("wednesday");
break;
case  4:
if(d==4)

printf("thrusday");
break;
case 5:
if(d==5)
printf("friday");
break;
case 6:
if(d==6)
printf("saturday");
break;
case  7:
if(d==7)
printf("sunday");
break;
}
return 0;
}
