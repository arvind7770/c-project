/*
Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/
#include <stdio.h>

int main()
{
    int sub1, sub2, sub3;
    printf("Enter Maths Marks: ");
    scanf("%d", &sub1);

    printf("Enter Science Marks: ");
    scanf("%d", &sub2);

    printf("Enter English Marks: ");
    scanf("%d", &sub3);
    float total_marks = sub1 + sub2 + sub3;
    float percantage = (total_marks) / 300 * 100;
    printf("Your total percantage is: %.2f\n", percantage);
    if ((percantage >= 40 && sub1 >= 33 && sub2 >= 33 && sub3 >= 33))
    {
        printf("You are passed!");
    }
    else
    {
        printf("You are failed!");
    }
    return 0;
}