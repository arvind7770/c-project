// same as bodmas rule
// like which type of operation perform firstly
// we will check in below example
#include <stdio.h>

int main()
{
    int a = 3;
    int b = 6;
    int c = 9;
    int my_output1 = a * b / c;
    int my_output2 = a / b * c;
    printf("my output 1 is: %d\n", my_output1);
    // in the output 1 = 3*6 = 18 and 18/9 = 2 Answer
    printf("my output 2 is: %d", my_output2);
    // in the output 2 = we will find o because of 3/6
    return 0;
}