#include <stdio.h>
#include <conio.h>

void main ()
{
int row, i, j;

printf("Enter no of rows: \n");
scanf("%d", &row);

for (i=0; i<row ; i++)
{
    for (j=0;j<=i;j++)
    {
        printf("*");

    }
    printf("\n");
}
}