#include <stdio.h>
#include<conio.h>

void main()
{
    int  num, rem, reverse = 0, sum = 0;
    
    printf("Enter a number: \n");
    scanf("%d",&num);

    while (num>0)
    {
        rem = num%10;
        sum += rem;
        reverse = reverse * 10 + rem;
        num /= 10;
    }

    printf("Reverse of the number is %d \n", reverse);
    printf("Sum of the digits is %d \n", sum);

}