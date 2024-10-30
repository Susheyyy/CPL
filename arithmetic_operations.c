#include <stdio.h>

int main()
{
    double num1, num2, result;
    char op;
    
    printf("Enter two numbers. \n ");
    scanf ("%lf %lf", &num1, &num2);
    
    printf("Enter the operand. \n '+' for addition \n '-' for subtraction \n '*' for multiplication \n '/' for division \n");
    scanf("%s", &op);

    switch (op)
    {
        case '+' :
        result = num1 + num2;
        printf("The addition of the entered numbers is %lf \n", result);
        break;

        case '-' :
        result = num1 - num2;
        printf("The subraction of the entered numbers is %lf \n" , result);
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
    return 0;

}
