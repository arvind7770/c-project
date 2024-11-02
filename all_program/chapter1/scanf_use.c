// create two empty variable and put their value manually by scanf funcation and output store in third variable.
#include <stdio.h>
int main()
{
    int first;
    int second;
    printf("*With the help of this program, You can add two value*\n");
    printf("Enter First Value: ");
    scanf("%d", &first);
    printf("Enter Second Value: ");
    scanf("%d", &second);
    int finaloutput = first + second;
    printf("Output is a : %d", finaloutput);
    return 0;
}