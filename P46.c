**day 46**
  1
  #include <stdio.h>

int main()
{
    char str[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != 'a' && str[i] != 'e' &&
            str[i] != 'i' && str[i] != 'o' &&
            str[i] != 'u' && str[i] != 'A' &&
            str[i] != 'E' && str[i] != 'I' &&
            str[i] != 'O' && str[i] != 'U')
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("String after removing vowels: %s", str);

    return 0;
}
2
  #include <stdio.h>

int main()
{
    char str[100];
    int seen[26] = {0};
    int i, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            int index = str[i] - 'a';

            if (seen[index] == 1)
            {
                printf("First repeating alphabet: %c\n", str[i]);
                found = 1;
                break;
            }

            seen[index] = 1;
        }
    }

    if (found == 0)
    {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
