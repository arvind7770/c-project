// volume of cylinder (formula- pi*r*r*h)
#include <stdio.h>

int main(){
    float pi=3.14159;
    float r;
    printf("Enter the value of R: ");
    scanf("%f",&r);
    float height;
    printf("Enter the value of Height: ");
    scanf("%f",&height);
    float vol_of_cylinder= pi*r*r*height;
    printf("Volume of Cylinder is: %f", vol_of_cylinder);
    return 0;
}