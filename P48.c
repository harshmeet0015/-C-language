 day 48
(1)
   #include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    scanf("%s", str1);
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation");
    } 
    else {
        strcpy(temp, str1);
        strcat(temp, str1);

        if (strstr(temp, str2) != NULL)
            printf("Rotation");
        else
            printf("Not a rotation");
    }

    return 0;
}
2
  #include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, start = 0, end;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            end = i - 1;

            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            start = i + 1;
        }
    }

    printf("%s", str);

    return 0;
}
