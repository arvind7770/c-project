#include <stdio.h>

int main(){
    int a=5;
    int x = a++;
    printf("the value of x is: %d", x); 
    // in this case first of all value of a is put as a x operator then post increment work
    // because of post increment value of x is not changed because post increment work
    return 0;
}  