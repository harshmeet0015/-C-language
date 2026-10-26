
#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student
{
    int sapId;
    int rollNo;
    char name[50];
    char phone[20];
    char email[60];
    int year;
    int semester;
    float sgpa[8];
};

struct Student s[MAX];
int count = 0;

/* Clear input buffer */
void clearInput()
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

/* Find student using SAP ID */
int findStudent(int id)
{
    int i;

    for (i = 0; i < count; i++)
    {
        if (s[i].sapId == id)
            return i;
    }

    return -1;
}

/* Calculate CGPA */
float calculateCGPA(int i)
{
    int j, total = 0;
    float sum = 0;

    for (j = 0; j < 8; j++)
    {
        if (s[i].sgpa[j] > 0)
        {
            sum += s[i].sgpa[j];
            total++;
        }
    }

    if (total == 0)
        return 0;

    return sum / total;
}

/* Display one student */
void displayStudent(int i)
{
    int j;

    printf("\nSAP ID: %d", s[i].sapId);
    printf("\nRoll No: %d", s[i].rollNo);
    printf("\nName: %s", s[i].name);
    printf("\nPhone: %s", s[i].phone);
    printf("\nEmail: %s", s[i].email);
    printf("\nYear: %d", s[i].year);
    printf("\nSemester: %d", s[i].semester);

    printf("\nSGPA of 8 semesters:\n");

    for (j = 0; j < 8; j++)
    {
        printf("Semester %d: %.2f\n", j + 1, s[i].sgpa[j]);
    }

    printf("CGPA: %.2f\n", calculateCGPA(i));
}

/* Add student */
void addStudent()
{
    int i, id;

    if (count == MAX)
    {
        printf("Student limit reached!\n");
        return;
    }

    printf("Enter SAP ID: ");
    if (scanf("%d", &id) != 1)
    {
        printf("Invalid input!\n");
        clearInput();
        return;
    }

    if (findStudent(id) != -1)
    {
        printf("SAP ID already exists!\n");
        clearInput();
        return;
    }

    s[count].sapId = id;

    printf("Enter Roll No: ");
    if (scanf("%d", &s[count].rollNo) != 1)
    {
        printf("Invalid input!\n");
        clearInput();
        return;
    }
    clearInput();

    printf("Enter Name: ");
    fgets(s[count].name, sizeof(s[count].name), stdin);
    s[count].name[strcspn(s[count].name, "\n")] = '\0';

    printf("Enter Phone Number: ");
    fgets(s[count].phone, sizeof(s[count].phone), stdin);
    s[count].phone[strcspn(s[count].phone, "\n")] = '\0';

    printf("Enter Email ID: ");
    fgets(s[count].email, sizeof(s[count].email), stdin);
    s[count].email[strcspn(s[count].email, "\n")] = '\0';

    do
    {
        printf("Enter Year (1-4): ");
        scanf("%d", &s[count].year);
    } while (s[count].year < 1 || s[count].year > 4);

    do
    {
        printf("Enter Semester (1-2 of that year): ");
        scanf("%d", &s[count].semester);
    } while (s[count].semester < 1 || s[count].semester > 2);

    for (i = 0; i < 8; i++)
    {
        do
        {
            printf("Enter SGPA for Semester %d (0 if not completed): ",
                   i + 1);
            scanf("%f", &s[count].sgpa[i]);
        } while (s[count].sgpa[i] < 0 ||
                 s[count].sgpa[i] > 10);
    }

    clearInput();
    count++;

    printf("Student record added successfully!\n");
}

/* Search student */
void searchStudent()
{
    int id, i;

    printf("Enter SAP ID to search: ");
    scanf("%d", &id);

    i = findStudent(id);

    if (i == -1)
        printf("Student not found!\n");
    else
        displayStudent(i);

    clearInput();
}

/* Calculate CGPA */
void showCGPA()
{
    int id, i;

    printf("Enter SAP ID: ");
    scanf("%d", &id);

    i = findStudent(id);

    if (i == -1)
        printf("Student not found!\n");
    else
        printf("CGPA of %s = %.2f\n",
               s[i].name, calculateCGPA(i));

    clearInput();
}

/* Average CGPA of each year */
void averageCGPA()
{
    int i, year, total;
    float sum;

    for (year = 1; year <= 4; year++)
    {
        sum = 0;
        total = 0;

        for (i = 0; i < count; i++)
        {
            if (s[i].year == year)
            {
                sum += calculateCGPA(i);
                total++;
            }
        }

        if (total > 0)
            printf("Year %d Average CGPA = %.2f\n",
                   year, sum / total);
        else
            printf("Year %d: No student records\n", year);
    }
}

/* Display all students */
void displayAll()
{
    int i;

    if (count == 0)
    {
        printf("No student records available!\n");
        return;
    }

    for (i = 0; i < count; i++)
    {
        printf("\n--- Student %d ---\n", i + 1);
        displayStudent(i);
    }
}

/* Delete student */
void deleteStudent()
{
    int id, i, j;

    printf("Enter SAP ID to delete: ");
    scanf("%d", &id);

    i = findStudent(id);

    if (i == -1)
    {
        printf("Student not found!\n");
    }
    else
    {
        for (j = i; j < count - 1; j++)
        {
            s[j] = s[j + 1];
        }

        count--;
        printf("Student record deleted successfully!\n");
    }

    clearInput();
}

/* Sort by SAP ID */
void sortBySAP()
{
    int i, j;
    struct Student temp;

    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (s[j].sapId > s[j + 1].sapId)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("Records sorted by SAP ID:\n");
    displayAll();
}

/* Sort by Name */
void sortByName()
{
    int i, j;
    struct Student temp;

    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (strcmp(s[j].name, s[j + 1].name) > 0)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("Records sorted by Name:\n");
    displayAll();
}

int main()
{
    int choice;

    do
    {
        printf("\n====================================\n");
        printf(" STUDENT RECORD MANAGEMENT SYSTEM\n");
        printf("====================================\n");
        printf("1. Add Student Record\n");
        printf("2. Search Student Record\n");
        printf("3. Calculate Student CGPA\n");
        printf("4. Average CGPA of Each Year\n");
        printf("5. Display All Student Records\n");
        printf("6. Delete Student Record\n");
        printf("7. Sort by SAP ID\n");
        printf("8. Sort by Name\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Please enter a valid number!\n");
            clearInput();
            continue;
        }

        clearInput();

        switch (choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                searchStudent();
                break;

            case 3:
                showCGPA();
                break;

            case 4:
                averageCGPA();
                break;

            case 5:
                displayAll();
                break;

            case 6:
                deleteStudent();
                break;

            case 7:
                sortBySAP();
                break;

            case 8:
                sortByName();
                break;

            case 9:
                printf("Exiting the program. Thank you!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 9);

    return 0;
}
