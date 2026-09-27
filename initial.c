**day 49**
(1)
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");

    // First character
    printf("%c", name[0]);

    // Character after every space
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0') {
            printf("%c", name[i + 1]);
        }
    }

    return 0;
}
2
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Find the last space
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    // Print initials of all words before surname
    for (i = 0; i < lastSpace; i++) {
        if (i == 0 || name[i - 1] == ' ') {
            printf("%c. ", name[i]);
        }
    }

    // Print surname in full
    printf("%s", &name[lastSpace + 1]);

    return 0;
}
