#include <stdio.h>
#include <conio.h>

int gcd (int,int);

int main()
{
    int num1, num2, result;
    printf("Enter two numbers. \n");
    scanf("%d %d", &num1, &num2);

    result = gcd(num1,num2);

    printf("\n The GCD for the entered numbers is %d \n", result);
    return 0;
}

int gcd (int num1, int num2)
{
    while(num1!=num2)
    
    if (num1>num2)
    {
        return gcd(num1-num2,num2);
    }
    else if (num2>num1)
    {
       return gcd(num1,num2-num1);
    }
   else
   {
    printf("Invalid Input.");
   }
   return num1;
}

