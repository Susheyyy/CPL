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
        printf ("%d is an armstrong number.",temp);
    }
    else 
    {
        printf ("%d is not an armstrong number.",temp);
    }

}
