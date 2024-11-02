// in this program we create a variable and get their value from user and their value store in another variable.
#include <stdio.h>
int main()
{
    int first;
    printf("Enter the value of first variable : ");
    scanf("%d", &first);
    int second = first;
    printf("*Your Input value comes as a second value*\n");
    printf("second variable value is : %d", second);
    return 0;
}