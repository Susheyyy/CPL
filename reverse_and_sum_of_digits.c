#include <stdio.h>
#include<conio.h>

int main()
{
    int  num, rem, reverse = 0, sum = 0;

//Input the number from the user

    printf("Enter a number: \n");
    scanf("%d",&num);

    // Reverse the number and calculate the sum of its digits
while (num>0)
    {
        rem = num%10;
        sum += rem;

//Reverse the original number 
        reverse = reverse * 10 + rem;
        num /= 10;
    }

//Print the reverse of the number and sum of digits 

    printf("Reverse of the number is %d \n", reverse);
    printf("Sum of the digits is %d \n", sum);

getch();
return 0;

}

