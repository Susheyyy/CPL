#include <stdio.h>
#include <conio.h>

void main ()
{
    int year;

    
    printf ("Enter year: \n");
    scanf("%d",&year);
    

    if (year%4==0 && year%100 !=0 || year %400 ==0)
    {
        printf("The year is a leap year");
    }
    else
    {
        printf("The year is not a leap year");
    }

}
