/*type conversion program
ex. - flot value store in int data type and int value store in flat date type
and get custom float output with the help of ".digit" (digit = your custom digit)
*/
#include <stdio.h>
int main()
{
    int a = 7.50;
    float b = 9;
    printf("value of a is: %d\n", a);
    printf("value of b is: %f\n", b);
    //  if you wanna print custom digit after decimal in float then use ".digit"
    printf("custom float digit after decimal is: %.3f", b);
    // now ".3f" is use to get only 3 digit after decimal ini float value
    return 0;
}