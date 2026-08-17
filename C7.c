**day 7**
  (1)
  #include<stdio.h>
  int main()
{
  printf("enter your year");
scanf("%d",&year);
if(year%400==0)
{
printf("%d is a leap year",year);
}
else 
if(year%100==0)
{
printf("%d is not a leap  year",year);
}
else 
if(year%4==0)
{
printf("%d is a leap year",year);
}
else
{
printf("%d is not a leap year",year);
}
return 0;
}
**2**
  #include<stdio.h>
int main()
{
char ch;
printf(" write your alphabet:");
scanf(" %c",&ch);
if(ch=='a'||ch=='i'|| ch=='e'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
printf("%cis a vowel",ch);
}
else
{
printf(" \n your %c is a consonent",ch);
}
return 0;
}
