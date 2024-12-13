#include <stdio.h>
#include<conio.h>

int main ()
{
    int num;

// Input the number from the user
    printf("Enter any number. \n");
    scanf("%d", &num);

// Check if the number is even or odd using modulus operator
  if(num%2==0)
  {
    printf("Number %d is even", num);
  }
  else
  {
     printf("Number %d is odd", num);
  }

  getch();
  return 0;
  }
