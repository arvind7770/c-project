// operator precedence rule work -
/*
First priority - *,/,%
second priority - +-
third priority = 
checkout handbook for more reference
*/
#include <stdio.h>

int main(){
    int x=2, y=3, z=3, k=1;
    float result =3*x/y - z+k;
    printf("the result is: %f",result);
    return 0;
}