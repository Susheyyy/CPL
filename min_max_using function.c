#include <stdio.h>
#include <conio.h>

int max (int,int);
int min (int, int);

int main()
{
    int num1, num2, maximum, minimum;
    printf("Enter two numbers. \n");
    scanf("%d %d", &num1, &num2);

    maximum = max (num1, num2);
    minimum = min (num1, num2);

    printf("\n Maximum = %d \n", maximum);
    printf("\n Minimum = %d \n", minimum);

    return 0;
}

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
