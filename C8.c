** day 8**
  (1)
  #include<stdio.h>
int main()
{
char  ch;
printf("enter alphabet");
scanf("%c",&ch);
if(ch>='A'&&ch>='Z')
{
printf("uppercase ");
}
else 
if(ch<='a'&&ch<='z')
{
printf("lowercase");
}
else
if(ch>=0&&ch<=9)
{
printf("digits");
}
else
{
printf("special character");
}
return 0;
}
**2**
  #include<stdio.h>
int main()
{
int  a,b,c;
printf("eneter your three numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>=b&&a>=c)
{
printf("%d is the lARGEST NUMBEr",a);
}
else
if(b>=a&&b>=c)
{
printf("%d is the largest number",b);
}
else
{
printf("%d is the largest ",c);
}
return 0;
}
