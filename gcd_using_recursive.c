#include <stdio.h>
#include <conio.h>

//Declaration of function gcd
int gcd (int,int);

int main()
{
    int num1, num2, result;
    printf("Enter two numbers. \n");
    scanf("%d %d", &num1, &num2);

//Call the gcd function and store the result
    result = gcd(num1,num2);

    printf("\nThe GCD for the entered numbers is %d \n", result);
    getch();
    return 0;
}

// Recursive function to calculate GCD
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
