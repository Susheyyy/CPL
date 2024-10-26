#include <stdio.h>

int main()
{
    double num1, num2, result;
    char operand;
    
    printf("Enter two numbers. \n ");
    scanf ("%lf %lf", &num1, &num2);
    
    printf("Enter the operand. \n '+' for addition \n '-' for subtraction \n '*' for multiplication \n '/' for division \n");
    scanf("%s", &operand);

    switch (operand)
    {
        case '+' :
        result = num1 + num2;
        printf("The addition of the entered numbers is %lf \n", result);
        break;

        case '-' :
        result = num1 - num2;
        printf("The addition of the entered numbers is %lf \n" , result);
        break;

        case '*' :
        result = num1 * num2;
        printf("The addition of the entered numbers is %lf \n" , result);
        break;

        case '/' :
        result = (num1/ num2);
        printf("The addition of the entered numbers is %lf \n", result);
        break;

        default:
        printf("You have used an incorrect operand.");
        break;
    }
    return 0;

}
