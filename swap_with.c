#include<stdio.h>
#include<conio.h>

int main ()
{
    int a, b, temp; 

//Input two numbers from the user 
    printf("Enter two numbers.\n");
    scanf("%d %d", &a,&b);

    temp = a;
    a = b;
    b = temp;

//Displaying the numbers after swapping 
    printf("Number after swapping %d and %d", a,b);
getch();
return 0;
}
