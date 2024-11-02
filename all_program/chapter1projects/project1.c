// area of rectangle
#include <stdio.h>

int main()
{
    int lenght;
    int width;
    printf("Enter the value of lenght: ");
    scanf("%d", &lenght);
    printf("Enter the value of width: ");
    scanf("%d", &width);
    float area_of_rectangle =lenght*width;
    printf("the area of rectangle is: %.0f", area_of_rectangle);
    return 0;
}