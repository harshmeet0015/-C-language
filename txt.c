day
  1
  
#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("Data saved successfully!");

    return 0;
}
