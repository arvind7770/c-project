// in this program we will use a shortcut method of if-else function
// with the help of "? :" conditional operator we can write a shortchut program
#include <stdio.h>

int main()
{
    // int passing_marks = 33;
    int marks;
    printf("enter your marks: ");
    scanf("%d", &marks);
    // if (marks >= passing_marks)
    // {
    //     printf("P");
    // }
    // else
    // {
    //     printf("F");
    // }

    // second way
    char result = (marks>33) ? 'P' : 'F';
    printf("%d",result);
    return 0;
}