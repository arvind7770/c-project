// simple interest program
#include <stdio.h>

int main(){
    int principal;
    float interest_rate;
    int time;
    printf("Please Enter principal ammount: ");
    scanf("%d",&principal);
     printf("Please Enter Rate of Interest: ");
    scanf("%f",&interest_rate);
     printf("Please Enter Time Period: ");
    scanf("%d",&time);
    float simple_interest = (principal*interest_rate*time)/100;
    printf("Interest ammount is: %f\n",simple_interest);
    float final_amount=principal+simple_interest;
    printf("Total ammount with interest is: %f",final_amount);
    return 0;
}