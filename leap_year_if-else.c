#include <stdio.h>
#include <conio.h>

void main ()
{
    int year, rem;
    clrscr();
    
    printf ("Enter year");
    scanf("%d",&year);
    rem = year%100;

    if (rem%4==0)
    {
        printf("The year is a leap year");
    }
    else
    {
        printf("The year is not a leap year");
    }

    getch();
}
