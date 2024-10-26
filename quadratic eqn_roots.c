#include <stdio.h>
#include <math.h>

void main()
{ 
    float  a,b,c,r1,r2,d;
    
    printf("Enter the value for a,b,c: \n");
    scanf("%f %f %f", &a,&b,&c);

    d = b*b - 4*a*c;


   if (d>0)
   { 
    r1 = (-b +sqrt(d))/2+a;
     r1 = (-b -sqrt(d))/2+a;

     printf ("The real roots are: %f%f", r1,r2);
   }

   else if (d==0)
   {
    r1 = r2 = -b/(2*a);
    printf ("Roots are equal,which is : %f%f", r1, r2);
   }
   else 
   {
   printf ("Roots are imaginary");
   }
}