// In this program we will change two variable value without third variable
// #include<stdio.h>
// int main ()
// {
//     int a=11;
//     int b=5;

//     // we will exchange value with the help of additon and substraction
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("value of a is: %d\n",a);
//     printf("value of b is: %d\n",b);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int first = 120;
    int second = 40;

    first = first + second;
    second = first - second;
    first = first - second;
    printf("first value is: %d\n", first);
    printf("second value is: %d\n", second);

    return 0;
}