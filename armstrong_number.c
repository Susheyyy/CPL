#include <stdio.h>
#include<conio.h>

void main()
{
    int rem, num, temp, sum = 0;
    
    printf("Enter a number: \n");
    scanf("%d",&num);

    temp = num ;

    while (num)
    {
        rem = num%10;
        sum = sum + (rem * rem * rem);
        num = num/10;
    }

    if(temp ==sum)
    {
        printf ("Number is an armstrong number %d",temp);
    }
    else 
    {
        printf ("Number is not an armstrong number %d",temp);
    }

}