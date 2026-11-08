day
1

#include <stdio.h>

enum Role
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    enum Role r;

    r = ADMIN;

    switch(r)
    {
        case ADMIN:
            printf("Welcome Admin! You have full access.");
            break;

        case USER:
            printf("Welcome User! You have limited access.");
            break;

        case GUEST:
            printf("Welcome Guest! You have read-only access.");
            break;

        default:
            printf("Invalid Role.");
    }

    return 0;
}
