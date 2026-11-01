day  80
1
#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct Student s;
    FILE *fp;
    int n, i;

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Writing student records into file
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", s.name);

        printf("Enter roll number: ");
        scanf("%d", &s.roll);

        printf("Enter marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%s %d %.2f\n",
                s.name, s.roll, s.marks);
    }

    fclose(fp);

    // Opening file in read mode
    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    // Reading records from file
    while (fscanf(fp, "%s %d %f",
                  s.name, &s.roll, &s.marks) == 3)
    {
        printf("\nName: %s", s.name);
        printf("\nRoll Number: %d", s.roll);
        printf("\nMarks: %.2f\n", s.marks);
    }

    fclose(fp);

    return 0;
}
