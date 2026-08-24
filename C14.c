**(day 15)**
(1)
#include <stdio.h>
int main()
{
long long fact =1;
int n,i;
printf("enter number :-");
scanf("%d",&n);
for(i=1;i<=n;i++)
fact= fact*i;
printf("factorial is %d =ll%d \n ",n,fact);
return 0;
}

(2)
#include <stdio.h>

int main() {
    int n, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    printf("Reverse = %d", rev);

    return 0;
}
