// i understood this program very well 
// for more reference you can check chat gpt
#include <stdio.h>

int main()
{
    int year;
    printf("**leap year identify program**\n");
    printf("Enter Year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year!", year);
    }
    else
    {
        printf("%d is not a leap year!", year);
    }
    return 0;
}