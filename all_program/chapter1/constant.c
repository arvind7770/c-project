// use const to store constant value in variable, constant value can not change, after defining.
#include<stdio.h>
int main()
{
const int minute = 60;
int hours = 4;
int totalminute = hours*minute;
printf("total minutes is: %d",totalminute);
return 0;
}