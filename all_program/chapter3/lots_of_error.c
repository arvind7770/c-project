// if else statment with all conditonal rule
/*
Assume we know our old password for signing in our account. But we wanna change our password so if we enter old password correctly the we can update our password and crate new password
*/
#include <stdio.h>

int main(){
    int old_password=5634;
    int user_pass;
    printf("Enter Your Old Password: ");
    scanf("%d", &user_pass);
    if (user_pass!=old_password)
    {
        printf("Incorrect Password\n");
    }
    else
    {
        printf("Correct Password\n");
    }
    if (user_pass==old_password)
    {
        printf("Now you can create your new Password. For singning in the future\n");
    }
    int new_password;
    printf("Make New Password (Password Shoud be 4 Numeric digits)");
    scanf("%d",new_password);
    int again_new_password;
     printf("Please Again Enter Password ");
    scanf("%d",again_new_password);
    if (new_password==again_new_password)
    {
        printf("Your Password Have Been Changed. Please Log In Again In Your Account");
    }
    else
    {
        printf("Your Password Not Matched (Check Your New Password)");
    }
    


    return 0;
}