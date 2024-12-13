#include <stdio.h>
#include<conio.h>
int main()
{
    double num1, num2, result;
    char op;

    //Input two numbers from the user 
    printf("Enter two numbers. \n ");
    scanf ("%lf %lf", &num1, &num2);
    
//Input the operator from the user
    printf("Enter the operator. \n '+' for addition \n '-' for subtraction \n '*' for multiplication \n '/' for division \n");
    scanf("%s", &op);

//Perform the operation based on user's choice
    switch (op)
    {
        case '+' :
        result = num1 + num2;
        printf("The addition of the entered numbers is %lf \n", result);
        break;

        case '-' :
        result = num1 - num2;
        printf("The subtraction of the entered numbers is %lf \n" , result);
        break;

        case '*' :
        result = num1 * num2;
        printf("The product of the entered numbers is %lf \n" , result);
        break;

        
case '/' :
        {
            if (num2==0)
            {
                printf("Your answer is infinity");
            }
            else
            {
                     result = (num1/ num2);
        printf("The quotient is %lf \n", result);
            }
        }
        break;

        default:
        printf("Invalid input entered.");
        break;
    }
    getch();
    return 0;
}
