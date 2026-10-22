day120
1
#includde<stdo.h>
#include<ctype.h>
iny main
{
  char str[100];
int i;
printf("enter your string ");
fgets(str,100,stdin);
for(i=0;str[i]!='\0';i++)
{
str[i]=tolower(str[i]);
if(i==0||str[i-1]=='.'||str[i-1]=='!'|| str[i-1]=='?')
{
str[i]=toupper(str[i]);
}
}
printf("sentences cases : %s",str);
return 0;
}
