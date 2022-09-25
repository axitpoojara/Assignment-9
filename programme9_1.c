//1. Write a program which takes the month number as an input and display
//   number of days in that month.
#include<stdio.h>
int main()
{
    int monthdays;
    printf( "enter any month number : ");
    scanf("%d", &monthdays);
    switch(monthdays)
    {
        case 1 :
            printf(" number of days in this month is 31");
            break;
        case 2 :
            printf(" number of days in this month is 28/29");
            break;
        case 3 :
            printf(" number of days in this month is 31");
            break;
        case 4 :
            printf(" number of days in this month is 30");
            break;
        case 5 :
            printf(" number of days in this month is 31");
            break;
        case 6 :
            printf(" number of days in this month is 30");
            break;
        case 7 :
            printf(" number of days in this month is 31");
            break;
        case 8 :
            printf(" number of days in this month is 31");
            break;
        case 9 :
            printf(" number of days in this month is 30");
            break;
        case 10 :
            printf(" number of days in this month is 31");
            break;
        case 11 :
            printf(" number of days in this month is 30");
            break;
        case 12 :
            printf(" number of days in this month is 31");
            break;
        default :
            printf(" enter valid number");
    }
    return 0;
}