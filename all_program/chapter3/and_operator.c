/*
Always remember in Logic Gate
True = 1
False = 0
*/
// in this program we will check use of and operator
// AND operator used to check both condition is TRUE or FALSE
// we will give two condition and if both conditon will match then it will generate true but if any one conditon doesn't match it will generate false

#include <stdio.h>

int main()
{
    int english_marks;
    int maths_marks;
    printf("enter your english marks: ");
    scanf("%d", &english_marks);
    printf("enter your maths marks: ");
    scanf("%d", &maths_marks);
    // if any one codition doesn't match then it will generate false
    // if both condition match then it's true 
    if ((english_marks>=33&&maths_marks>=33))
    {
        printf("Congratulation! you are pass");
    }
    else
    {
        printf("Unfortunatly you are Fail");
    }
    return 0;
}