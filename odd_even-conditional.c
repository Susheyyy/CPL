#include <stdio.h>
#include<conio.h>

int main ()
{
    int num;
    
// Input the number from the user
    printf("Enter any number. \n");
    scanf("%d", &num);

// Check if the number is even or odd using conditional operator
 (num%2==0)?printf("The number is even"):printf("The number is odd");

getch();
return 0;
  
  }
