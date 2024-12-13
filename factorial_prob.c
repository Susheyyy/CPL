#include <stdio.h>
#include<conio.h>

int main()
{
    int  num =1, count, limit;
    float sum = 0.0, fact;
    
//Input the number from the user 

    printf("Enter the number upto which you want to calculate the factorial \n");
    scanf("%d",&limit);

//Calculate the sum of the series

    while (num<=limit)
    {
        fact = 1;
        for (count = 1; count <=num; count++)
        {
            fact = fact * count;

        }
        sum = sum + (num/fact);
        num++;
    }

  //Print the sum of the series
        printf ("Sum of %d limit of series is %f \n", limit, sum);

       getch();
        return 0;

}
