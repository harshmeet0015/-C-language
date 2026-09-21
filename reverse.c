**( day 43)**
  (1)
  #include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len;

    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    // Remove newline character if present
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }

    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
2
  #include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, flag = 1;

    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    // Remove newline character if present
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}
