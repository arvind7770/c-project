// Write a program to find greatest of four numbers entered by the user.
// greater = bada (big)

#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);
    printf("Enter 3rd Number: ");
    scanf("%d", &c);
    printf("Enter 4th Number: ");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("the greatest number is: %d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("the greatest number is: %d", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("the greatest number is: %d", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("the greatest number is: %d", d);
    }

    return 0;
}