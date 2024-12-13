#include<stdio.h>
#include<conio.h>

int main ()
{
    int a, b;

//Input two numbers from the user 
    printf("Enter values for a and b. \n");
    scanf("%d%d", &a, &b);

    a = a+b;
    b = a-b;
    a = a-b;

//Displaying the numbers after swapping 
 printf("Numbers after swapping %d %d", a,b);

getch();
return 0;

}
