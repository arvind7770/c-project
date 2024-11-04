/*
we will write a program to give a grade according to student's marks
in this program we will use if else and AND Logical Operator
*/
#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks >= 101)
    {
        printf("Please enter a valid marks!");
    }

    else if ((marks >= 90 && marks <= 100))
    {
        printf("Your grade is: 'A'");
    }

    else if ((marks >= 80 && marks <= 90))
    {
        printf("Your grade is: 'B'");
    }

    else if ((marks >= 70 && marks <= 80))
    {
        printf("Your grade is: 'C'");
    }

    else if ((marks >= 60 && marks <= 70))
    {
        printf("Your grade is: 'D'");
    }

    else if ((marks >= 50 && marks <= 60))
    {
        printf("Your grade is: 'E'");
    }
    else
    {
        printf("You are Fail\nYour grade is: 'F'");
    }

    return 0;
}