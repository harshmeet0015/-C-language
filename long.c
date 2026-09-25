day 46
1
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0};
    int i;

    scanf("%s", str1);
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams");
        return 0;
    }

    for (i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}
2
  #include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[100], longest[100];
    int i = 0, j = 0;
    int maxLength = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] != ' ' && str[i] != '\n') {
            word[j] = str[i];
            j++;
        } 
        else {
            word[j] = '\0';

            if (j > maxLength) {
                maxLength = j;
                strcpy(longest, word);
            }

            j = 0;
        }

        i++;
    }

    /* Check the last word */
    word[j] = '\0';

    if (j > maxLength) {
        strcpy(longest, word);
    }

    printf("%s", longest);

    return 0;
}
