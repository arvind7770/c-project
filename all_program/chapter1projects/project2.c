// area of circle
#include <stdio.h>

int main()
{
    float pi = 3.14159;
    float r;
    printf("Enter the value of R: ");
    scanf("%f", &r);
    float area = pi * r * r;
    printf("area of cirlce is: %f", area);
    return 0;
}