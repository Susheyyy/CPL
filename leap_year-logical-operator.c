#include <stdio.h>
#include <conio.h>

int main ()
{
    int year;

    //Input the year from the user
    printf ("Enter year: \n");
    scanf("%d",&year);
    
//Checking whether the year is a leap year or not
    if (year%4==0 && year%100 !=0 || year %400 ==0)
    {
        printf("The year is a leap year");
    }
    else
    {
        printf("The year is not a leap year");
    }
  getch();
return 0;
}
