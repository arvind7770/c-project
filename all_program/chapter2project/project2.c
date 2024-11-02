//  Write a program to check whether a number is divisible by user intput's or not.
#include <stdio.h>

int main()
{
    // we use %(modulus) operator to check this. if we will get 0 that mean our number divisible by value. but we find any type or reminder that means our value can't divisable by given value
    // then we can use if else statment to provide a readable statment to user
    int divident;
    printf("Enter the value of divident: "); 
    scanf("%d", &divident);
    int divisor;
    printf("Enter the value of divisor: ");
    scanf("%d", &divisor);
    int finalreminder = divident % divisor;
    printf("reminder is %d\n", finalreminder);
    if (finalreminder>0)
    {
        printf("%d! can not divide by %d",divident, divisor);
    }
    else
    {
        printf("%d, can be divide by %d",divident, divisor);
    }
    return 0;
}