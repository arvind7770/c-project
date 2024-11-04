/*
we will create a program to easily find student name with the help of enrollment number
*/
#include <stdio.h>

int main()
{
    int enrollment_number;
    printf("*** BCA CLOUD COMPUTING 3rd Sem Students List ***\n");
    printf("Please enter student's enrollment number: ");
    scanf("%d", &enrollment_number);
    switch (enrollment_number)
    {
    case 1001:
        printf("Aditya Rawat");
        break;

    case 1002:
        printf("Anurag Arya");
        break;

    case 1003:
        printf("Arjun Kumar");
        break;

    case 1004:
        printf("Arti");
        break;

    case 1005:
        printf("Arvind");
        break;

    case 1006:
        printf("Chanchal Rathore");
        break;

    case 1007:
        printf("Chanchal Soni");
        break;

    case 1008:
        printf("Dikshit Goyal");
        break;

    case 1009:
        printf("Dimple Nokwal");
        break;

    case 1010:
        printf("Gavra Dalawariya");
        break;

    case 1011:
        printf("Gourav Carpenter");
        break;

    case 1012:
        printf("Isha Vishwakarma");
        break;

    case 1013:
        printf("Keshav Sharma");
        break;

    case 1014:
        printf("Kisley Soni");
        break;

    case 1015:
        printf("Lakshita Sharma");
        break;

    case 1016:
        printf("Madhav Prajapat");
        break;

    case 1017:
        printf("Mangal Patidar");
        break;

    case 1018:
        printf("Nandkishore Patidar");
        break;

    case 1019:
        printf("Naveen Arya");
        break;

    case 1020:
        printf("Pavitra Surawat");
        break;

    case 1021:
        printf("Pawan Dhakad");
        break;

    case 1022:
        printf("Raj Jain");
        break;

    case 1023:
        printf("Ravi Dhar");
        break;

    case 1024:
        printf("Rishika Ratnawat");
        break;

    case 1025:
        printf("Rohan Parmar");
        break;

    case 1026:
        printf("Saharsh Joshi");
        break;

    case 1027:
        printf("Sanskar Sethiya");
        break;

    case 1028:
        printf("Shiv Narayan Gurjar");
        break;

    case 1029:
        printf("Shobhit Pandey");
        break;

    case 1030:
        printf("Sunil Dangi");
        break;

    case 1031:
        printf("Tushar Khatri");
        break;

    case 1032:
        printf("Vinay Dhakad");
        break;

    case 1033:
        printf("Vishal Dangi");
        break;

    default:
        printf("Please Enter a valid last 4 digits enrolment number!");
        break;
    }

    return 0;
}
