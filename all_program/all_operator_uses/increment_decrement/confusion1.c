/*in this case first of all post increment work then addition operator then pre increment works
that reason firstly value of a will not change then + operator then value of b pre increment then show output
*/


#include <stdio.h>

int main()
{
    int a = 4, b = 3;
    printf("output is: %d", a++ + ++b);
    return 0;
}

/*
but if you write this then it will give a error
*/
// #include <stdio.h>

// int main()
// {
//     int a = 4, b = 3;
//     printf("output is: %d", a+++++b);
//     return 0;
// }
// in this case it show a error of lvalue that means it does not make any sense.
