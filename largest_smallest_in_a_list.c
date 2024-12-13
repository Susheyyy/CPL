#include <stdio.h>

int main()
{
   int number, i;

   printf("Enter number of elements in the array: \n");
   scanf("%d", &number);

   if (number <= 0) 
   {
       printf("Array is empty. \n");
       return 0; 
// Exit the program if the array is empty
   }

   int arr[number];
   printf("\nEnter the elements of the array: \n");

   for (i = 0; i < number; i++)
   {
       scanf("%d", &arr[i]);
   }

   // Initialize smallest and largest with the first element of the array
   int smallest = arr[0];
   int largest = arr[0];

   for (i = 1; i < number; i++)
   {
       // Check for smallest
       if (arr[i] < smallest)
       {
           smallest = arr[i];
       }

       // Check for largest
       if (arr[i] > largest)
       {
           largest = arr[i];
       }
   }

   // Print the results after the loop
   printf("\nSmallest Element = %d\n", smallest);
   printf("Largest Element = %d\n", largest);

   return 0;
}
