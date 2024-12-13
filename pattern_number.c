#include <stdio.h>
#include <conio.h>

int main ()
{
int row, i, j;

//Input number of rows from the user
printf("Enter no of rows: \n");
scanf("%d", &row);

//Loop to print the pattern
for (i=row; i>0 ; i--)
{
    for (j=1;j<=i;j++)
    {
        printf("%d",j);
    }

//Move to the next line after printing each row 
    printf("\n");
}

getch();

return 0;
}

