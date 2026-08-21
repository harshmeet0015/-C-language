**(day 12)**
  (1)
  #include <stdio.h>

int main() {
    int days;
    float fine;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 5) {
        fine = days * 2;
        printf("Library Fine = ₹%.2f", fine);
    }
    else if (days <= 10) {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Library Fine = ₹%.2f", fine);
    }
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Library Fine = ₹%.2f", fine);
    }
    else {
        printf("Membership Cancelled");
    }

    return 0;
}

**(2)**
  #include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }

    printf("Bill: ₹%.0f", bill);

    return 0;
}
