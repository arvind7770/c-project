/*
**Type conversion rule**
int and int = int
int and float = float
float and float = float
*/
#include <stdio.h>

int main(){
    // case 1
    int a=9;
    int b=2;
    int c=a/b;
    printf("the value of c is: %d\n",c);
    // in this case we have 4 output bucasue output will come in float and we did not use float data type in variable 
    // now we will use float data type and see the result
    float x=9;
    int y=2;
    float z=x/y;
    printf("the currect value of output is: %f",z);
    // now in this case we have found right value of output because we have dicussed in first to third line (type conversion rule.)
    return 0;
}