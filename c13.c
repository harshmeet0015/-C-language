 **(day 13)*
(1)

#include <stdio.h>

int main() {
    int a, b;
    char ch;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("operators are going tobe used (+, -, *, /, %%): ");
    scanf(" %c", &ch);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch(ch) {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %d", a / b);
            else
                printf("Cannot divide by zero");
            break;

        case '%':
            if (b != 0)
    0            printf("Result = %d", a % b);
            else
                printf("Cannot find remainder with zero");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
**(2)**
#include<stdio.h>
int main()
{
int num,i;
printf("enter your number");
scanf("%d",&num);
for(i=0;i<=num;i++)
{
printf("%d \n ",i);
}
return 0;
}


