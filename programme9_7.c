/*7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/
#include<stdio.h>
int main()
{
    int unit,k,h,j,l,a,b;
    printf(" Enter units of electricity usage :");
    scanf("%d",&unit);
    switch(unit)
    {
        case 1 ... 50: ;
                        k=unit*0.50;
                        printf("amount of elecricity bill is %d",k);
                        printf(" \nsurcharge for %d unit is %d",unit,(k*20/100));
                        printf(" \nyour total charges is %d",(k+(k*20/100)));
                        break;
        case 51 ... 150: ;
                        k=50*0.5;
                        h=(unit-50)*0.75;
                        a=(((k+h)*20)/100);
                        b=((k+h)+a);
                        printf("amount of elecricity bill is %d",k+h);
                        printf(" \nsurcharge for %d unit is %d",unit,a);
                        printf(" \nyour total charges is %d",b);
                        break;
        case 151 ... 250: ;
                        k=50*0.5;
                        h=100*0.75;
                        j=(unit-150)*1.2;
                        a=(((k+h+j)*20)/100);
                        b=((k+h+j)+a);
                        printf("\namount of elecricity bill is %d",k+h+j);
                        printf(" \nsurcharge for %d unit is %d",unit,a);
                        printf(" \nyour total charges is %d",b);
                        break;
        default :
                k=50*0.5;
                h=100*0.75;
                j=100*1.2;
                l=(unit-250)*1.5;
                a=(((k+h+j+l)*20)/100);
                b=((k+h+j+l)+a);
                printf("\namount of elecricity bill is %d",k+h+j+l);
                printf(" \nsurcharge for %d unit is %d",unit,a);
                printf(" \nyour total charges is %d",b);
                break;
    }
    return 0;
}