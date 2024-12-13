#include <stdio.h>
#include <conio.h>

int max (int,int);
int min (int, int);

int main()
{
//Input two numbers from the user 
    int num1, num2, maximum, minimum;
    printf("Enter two numbers. \n");
    scanf("%d %d", &num1, &num2);

    maximum = max (num1, num2);
    minimum = min (num1, num2);

    printf("\n Maximum = %d \n", maximum);
    printf("\n Minimum = %d \n", minimum);

    getch();
    return 0;
    
}
//Function to find the maximum amongst the entered numbers
int max (int x, int y)
{
    int result;
    
    if (x>y)
    {
        result =x;
    }
    else{
        result = y;
    }
    return result;
}

//Function to find the minimum amongst the entered numbers
int min (int x, int y)
{
    int result;
    
    if (x<y)
    {
        result =x;
    }
    else
    {
        result = y;
    }
    return result;
}

