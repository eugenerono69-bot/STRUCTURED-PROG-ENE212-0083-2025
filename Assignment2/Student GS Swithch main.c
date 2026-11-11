#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int regNo;
    int marks;
    int gradeNumber;

    char name[50];
    char grade;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\nEnter Registration Number: ");
        scanf("%d", &regNo);

        printf("Enter Student Name: ");
        scanf("%s", name);

        printf("Enter Marks: ");
        scanf("%d", &marks);

        gradeNumber = marks / 10;

        switch (gradeNumber)
        {
            case 10:
            case 9:
            case 8:
            case 7:
                grade = 'A';
                break;

            case 6:
                grade = 'B';
                break;

            case 5:
                grade = 'C';
                break;

            case 4:
                grade = 'D';
                break;

            default:
                grade = 'F';
        }

        printf("\nSTUDENT INFORMATION\n");
        printf("Registration No: %d\n", regNo);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        if (marks >= 40)
            printf("Status: PASSED\n");
        else
            printf("Status: FAILED\n");
    }

    return 0;
}
