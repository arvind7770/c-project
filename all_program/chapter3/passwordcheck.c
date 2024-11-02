// Password Check Program
#include <stdio.h>

int main(){
    int old_pass=9182;
    int pass_from_user;
    printf("Enter Your Old Password: ");
    scanf("%d",&pass_from_user);
    if (old_pass==pass_from_user)
    {
       printf("Your Have Signed In Succesfully\n");
    }
    else
    {
        printf("Incorrect Password\nPlease Try Again");
    }
   
    
    return 0;
}