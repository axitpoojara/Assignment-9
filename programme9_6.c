//6. Program to check whether a year is a leap year or not. Using switch
//   statement.
#include<stdio.h>
int main()
{
    int yr,k;
    printf(" Enter any year in yyyy format: ");
    scanf("%d", &yr);
    k=yr % 4 == 0;
    switch(k)
    {
        case 1 :
                printf("%d is a leap year",yr);
                break;
        case 0 :
                printf("%d is not a leap year",yr);
                break;
        default : 
                printf(" Enter a valid number");
    }
    return 0;
}