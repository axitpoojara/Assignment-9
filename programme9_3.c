/*3. Write a program which takes the day number of a week and displays a
unique greeting message for the day.*/
#include<stdio.h>
int main()
{
    int day;
    printf(" Enter day number between 1 to 7 : ");
    scanf("%d",&day);
    switch(day)
    {
        case 1 :
            printf(" Today is monday");
            break;
        case 2 :
            printf(" Today is tuesday");
            break;
        case 3 :
            printf(" Today is wednesday");
            break;
        case 4 :
            printf(" Today is thusday");
            break;
        case 5 :
            printf(" Today is friday");
            break;
        case 6 :
            printf(" Today is saturday");
            break;
        case 7 :
            printf(" Today is sunday");
            break;
      
        default :
            printf(" enter valid number");
    }
    return 0;
}

