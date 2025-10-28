#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if ((marks <= 100) && (marks > 90))
    {
        printf("Your grade is A");
    }
    else if ((marks < 90) && (marks > 80))
    {
        printf("Your grade is B");
    }
    else if ((marks < 80) && (marks > 70))
    {
        printf("Your grade is C");
    }
    else if ((marks < 70) && (marks > 60))
    {
        printf("Your grade is D");
    }
    else if ((marks < 60) && (marks > 50))
    {
        printf("Your grade is E");
    }
    else if (marks < 50)
    {
        printf("Your grade is F");
    }
    return 0;
}
