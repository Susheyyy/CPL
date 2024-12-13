#include<stdio.h>
#include<stdlib.h>

#define MAX 100  

int main ()
{
    int arr1[MAX], arr2[MAX];  // Declare two arrays to store source and destination elements
    int i, n;  
    
    int *ptr1, *ptr2;  // Declare pointers to hold addresses of the source and destination arrays

    
    printf("Enter the size of array: \n");
    scanf("%d", &n);  

   
    printf("\nEnter the source array elements: \n");
    for (i = 0; i< n; i++) 
    {
        scanf("%d", &arr1[i]);  
    }

    ptr1 = arr1;  
    ptr2 = arr2;  

    // Copy elements from arr1 to arr2 using pointers
    for (i = 0; i < n; i++) 
    {
        *ptr2 = *ptr1;  
        ptr1++;  
        ptr2++;  
    }

    // Print the destination array after copying
    printf(" \nDestination array after copy: \n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr2[i]); 
        }
        getch();
        return 0;
}
