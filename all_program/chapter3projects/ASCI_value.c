//  Write a program to determine whether a character entered by the user is lowercase or not.
//  in this program we use ASCI value (because we know every charpacter have a specific ASCI value)
#include <stdio.h>

int main()
{
    char user_input;

    printf("Please Enter your alphabet character: ");
    scanf("%c", &user_input);
    printf("the ASCI value of %c is: %d\n", user_input, user_input);
    // or you can use this one also
    // printf("the ASCI value is %c",user_input);
    if (user_input >= 97 && user_input <= 122)
    {
        printf("this value is lowercase");
    }
    // if you use || OR operator. Then its fail because you are telling if any one condition true then output come, but we need both condition is true then output come
    else
    {
        printf("this value is not lowercase");
    }
    return 0;
}