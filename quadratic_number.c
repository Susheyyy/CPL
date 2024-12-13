#include <stdio.h>
#include <math.h>

int main()
{ 
    float  a,b,c,r1,r2,d;
    //Input coefficients from the user 
    printf("Enter the value for a,b,c: \n");
    scanf("%f %f %f", &a,&b,&c);

    d = b*b - 4*a*c;

    //Case 1:Two distinct real roots 
   if (d>0)
   { 
    r1 = (-b +sqrt(d))/2+a;
     r1 = (-b -sqrt(d))/2+a;

     printf ("The real roots are: %f %f", r1,r2);
   }
    //Case 2:Two equal real roots 
   else if (d==0)
   {
    r1 = r2 = -b/(2*a);
    printf ("Roots are equal, which is : %f %f", r1, r2);
   }
    //Case 3:Complex roots 
   else 
   {
   printf ("Roots are imaginary");
   }

   getch();
   return 0;
}
