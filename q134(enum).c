day 84
1
#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status s;

    s = SUCCESS;

    if (s == SUCCESS) {
        printf("Operation Successful");
    }
    else if (s == FAILURE) {
        printf("Operation Failed");
    }
    else if (s == TIMEOUT) {
        printf("Operation Timed Out");
    }

    return 0;
}
