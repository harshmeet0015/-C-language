day 
1
#include <stdio.h>

enum Days
{
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY,
    THURSDAY, FRIDAY, SATURDAY
};

int main()
{
    int i;

    char *names[] = {
        "SUNDAY", "MONDAY", "TUESDAY",
        "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"
    };

    printf("Enum Names and Integer Values:\n");

    for(i = 0; i < 7; i++)
    {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}
