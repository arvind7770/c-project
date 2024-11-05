/*
Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
Income Slab                       
2.5 – 5.0L                               
5.0L - 10.0L                          
Above 10.0L                         
Tax  
5% 
20% 
30% 
*/


// this project is pending due to some reason
#include <stdio.h>

int main(){
   int income;
   int tax;
   printf("Enter your income: ");
   scanf("%d",income);
   if (250000>income)
   {
    printf("your salary is not appear as a tax");
   }
    else if ((income<=500000&&250000>=income))
    {
        printf("tax");
    }
    
    
    return 0;
}