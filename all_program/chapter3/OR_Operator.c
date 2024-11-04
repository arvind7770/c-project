// In this program we will learn use or OR Operator
// if any one conditon matched then program will give true(1) output

#include <stdio.h>

int main()
{
    int experince_year;
    int project_countribuition;
    printf("How many year have you experince in IT sector: ");
    scanf("%d", &experince_year);
    printf("How many open source project have you completed: ");
    scanf("%d", &project_countribuition);
    if ((experince_year >= 3 || project_countribuition >= 2))
    {
        printf("Congratulation! You are eligibal for applying in our interview round");
    }
    else
    {
        printf("Sorry you are not eligibal for our interview round");
    }
    return 0;
}