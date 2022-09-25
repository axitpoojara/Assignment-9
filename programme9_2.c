/*2. Write a menu driven program with the following options:
    a. Addition
    b. Subtraction
    c. M=ultiplication
    d. Division
    e. Exit
*/
#include<stdio.h>
#include<stdlib.h>
int main()

{
    
    float k,y,z;
    char a;

    {
        printf("\n a.Addition");
        printf("\n b.Subtraction");
        printf("\n c.Multiplication");
        printf("\n d.Division");
        printf("\n e.Exit");

        printf("\n\nEnter your choice from above : ");
        scanf("%c",&a);
        switch(a)
        {
            case 'a':
                    printf("Enter any two numbers :");
                    scanf("%d%d",&y,&z);
                    printf("suf of both numbers is %d",y+z);
                    break;
            case 'b':
                    printf("Enter any two numbers :");
                    scanf("%d%d",&y,&z);
                    if(y>z)
                        k=y-z;
                    else
                        k=z-y;
                    printf("Difference of both numbers is %.2f",k);
                    break;
            case 'c':
                    printf("Enter any two numbers :");
                    scanf("%d%d",&y,&z);
                    printf("Multiplication of both numbers is %d",y*z);
                    break;
            case 'd':
                    printf("Enter any two numbers :");
                    scanf("%f%f",&y,&z);
                    if(y>z)
                        k=(y/z);
                    else
                        k=(z/y);
                    printf("Division of both numbers is %.2f",k);
                    break;
            case 'e':
                    
                    exit(0);
                    break;
            default : 
                    printf(" Enter a valid number");
        }          
        
    }
    return 0;

}