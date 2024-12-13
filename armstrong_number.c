#include <stdio.h>
#include<conio.h>

int main()
{
    int rem, num, temp, sum = 0;
    //Input the number from the user

    printf("Enter a number: \n");
    scanf("%d",&num);

//Creating a copy of the original number 
    temp = num ;

//Calculating number of digits and sum of digits raised to the power n
    while (num)
    {
        rem = num%10;
        sum = sum + (rem * rem * rem);
        num = num/10;
    }

//Checking whether the number is an Armstrong number or not 
    if(temp ==sum)
    {
        printf ("%d is an armstrong number",temp);
    }
    else 
    {
        printf ("%d is not an armstrong number",temp);
    }

getch();
return 0;
}
