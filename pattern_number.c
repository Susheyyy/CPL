#include <stdio.h>
#include <conio.h>

void main ()
{
int row, i, j;

printf("Enter no of rows: \n");
scanf("%d", &row);

for (i=row; i>0 ; i--)
{
    for (j=1;j<=i;j++)
    {
        printf("%d",j);

    }
    printf("\n");
}
}
