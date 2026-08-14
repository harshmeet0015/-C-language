 **DAY-5:-(1)**
#include <stdio.h>
#include<math.h>

int main()
{
    float prin, rate, time,simpleinterest,compoundinterest;
    

    printf("Enter  your Principal: ");
    scanf("%f", &prin);

    printf("Enter your  Rate: ");
    scanf("%f", &rate);

    printf("Enter  your Time: ");
    scanf("%f", &time);

    simpleinterest = (prin* rate * time) / 100;

    compoundinterest = prin* pow((1 + rate / 100), time) - prin;

    printf("\nSimple Interest = %.2f", simpleinterest);
    printf("\nCompound Interest = %.2f", compoundinterest);

    return 0;
}
**(2)**
 #include<stdio.h>
int main()
{
int hours,seconds,minute,second;
printf("enter your time in seconds ");
scanf("%d",seconds);
hours=seconds/3600;
minute=(seconds%3600)/60;
second=seconds%60;
printf("%d:%d:%d",hours,minute,second);
return 0;
}
