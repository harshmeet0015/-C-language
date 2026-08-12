 DAY 3 (1)
#include<stdio.h>
int main()
{
float celsius,fahrenheit;
printf("enter temp in  cels.");
scanf("%f",&celsius);
fahrenheit=(celsius*9/5)+32;
printf("temperature in farhenheit=%.2f \n",fahrenheit);
return 0;
}
(2):-
#include<stdio.h>
int main()
{
int A,B, temp;
printf("  enter your a :");
scanf("%d",&A);
printf("enter your b:");
scanf("%d",&B);
printf(" by swapping : A=%d,B=%d \n",A,B);
temp =A;
A=B;
B=temp;
printf("after swapping :A=%d,B=%d \n",A,B);
return 0;
}
