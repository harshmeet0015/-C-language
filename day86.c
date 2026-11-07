day 86
1
#include <stdio.h>

enum Operation
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    enum Operation choice;
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n1. ADD");
    printf("\n2. SUBTRACT");
    printf("\n3. MULTIPLY");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case ADD:
            result = a + b;
            printf("Addition = %d", result);
            break;

        case SUBTRACT:
            result = a - b;
            printf("Subtraction = %d", result);
            break;

        case MULTIPLY:
            result = a * b;
            printf("Multiplication = %d", result);
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}
