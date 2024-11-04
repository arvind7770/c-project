/*
in this program we will learn if-else and else-if conditon 
first of all if program exicute, if (if) program match our condition then program ends but (if) program will not not then compilder will go to (else-if) statment and if both will not fulfill condition then compiler will go to (else)
*/
// basically else-if is used to check another third conditon
// we can use multiple else-if operator
#include <stdio.h>

int main(){
    int age;
    printf("enter your age: ");
    scanf("%d", &age);
    if (60<=age)
    {
        printf("you are a seniour citizen! please seat at chair. Voting Commision is always available for helping you");
    }
    else if (age>=18)
    {
        printf("you are eligibal for vote!\n please keep in line.\n your turn will be come soon");
    }
    else 
    {
        printf("you are not eligibal for voting");
    }
    return 0;
}