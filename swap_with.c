#include <stdio.h>
#include <conio.h>

void main ()
{
    int a, b, temp;
    
    printf("Enter two numbers.");
    scanf("%d %d, &a, &b");

    temp = a;
    a = b;
    b = temp;

    printf("Number after swapping %d and %d, a,b");

}