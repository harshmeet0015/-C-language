#include<stdio.h>
int main()
{
int length,breadth,A,P;
printf("length of rectangle");
scanf("%d",&length);
printf("breadth of rec: \n ");
scanf("%d",&breadth);
A=length*breadth;
P=2*(length*breadth);
printf("area=%d\n",A);
printf("perimeter=%d \n",P);
return 0;
}

2:-

  #include<stdio.h>
 int main()
{
float radius,area,circum;
const float pi=3.14;
printf("radius  of circle:");
scanf("%f",&radius);
area=pi*radius*radius;
circum=2*pi*radius;
printf("area of the circle is =%f \n ",area);
printf(" circumference of the circle is =%f \n ",circum);
return 0;
}
