**(day 14)**
(1)
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
(2)

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {
        product = product * i;
    }

    printf("Product of even numbers = %lld", product);

    return 0;
}
