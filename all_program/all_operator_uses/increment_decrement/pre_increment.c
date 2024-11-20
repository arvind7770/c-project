#include <stdio.h>

int main(){
    int a=5;
    int x = ++a;
    printf("the output of x is: %d",x);
    // in this case first of all pre increment work then store the value of a in x variable with pre increment
    // a= ++a;
    // a= 6;
    // x = a;
    // x = 6;
    // the output of x is 6
    return 0;
}