// convert Celsius (Centigrade degrees temperature to Fahrenheit)
// formula of fahrenheit is : 9/5*c+32
#include <stdio.h>

int main()
{
    float celsius;
    printf("Enter the value of celsius: ");
    scanf("%f", &celsius);
    float fahrenheit = (9.0/5.0) * celsius + 32; // we will use 9.0/5.0
    printf("the value of fahrenheit is: %f", fahrenheit);
    return 0;
}