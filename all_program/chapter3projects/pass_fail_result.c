/*
Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/
#include <stdio.h>

int main()
{
    float sub1, sub2, sub3;
    printf("Enter Maths Marks: ");
    scanf("%f", &sub1);

    printf("Enter Science Marks: ");
    scanf("%f", &sub2);

    printf("Enter English Marks: ");
    scanf("%f", &sub3);
    float total_marks = sub1 + sub2 + sub3 / 3;
    if ((sub1 < 33 || sub2 < 33 || sub3 < 33))
    {
        printf("you are fail in individual subjects");
    }
    else if ((total_marks<40))
    {
        printf("you are failed because your total percentage is: %f",total_marks);
    }
    else
    {
        printf("you are passed in all subjects");
    }
    return 0;
}