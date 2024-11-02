// simple if else program
#include <stdio.h>
int main()
{
    int age;
    printf("Security check because of our age policy\n");
    printf("enter your age accroding to valid document:");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Congratulation! You can make account.");
    }
    else
    {
        printf("sorry you are not eligibal for sign in.");
    }

    return 0;
}