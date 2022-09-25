/*9. Program to Convert even number into its upper nearest odd number
Switch Statement.*/
#include<stdio.h>
int main()
{
    int num,s;
    printf("Enter any number :");
    scanf("%d",&num);
      s = num % 2 == 0 ;
    switch(s)
    {
        case 1:
                printf(" upper nearest odd number of %d is %d",num,num+1);
                break;
        case 0:
                printf(" upper nearest odd number of %d is %d",num,num);
                break;
        
    }
    return 0;
}