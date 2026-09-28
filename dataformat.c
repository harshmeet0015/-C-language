day 50
1
#include <stdio.h>

int main() {
    char date[20];
    int day, year;

    scanf("%d/04/%d", &day, &year);

    printf("%02d-Apr-%d", day, year);

    return 0;
}
(2)
#include <stdio.h>

int main() {
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i; str[j] != '\0'; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
