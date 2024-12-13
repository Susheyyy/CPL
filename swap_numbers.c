#include<stdio.h>
#include<conio.h>

// Function to swap numbers using call-by-value
void swapByValue(int a, int b)
 { 
    int temp;  
    temp = a;  
    a = b;  
    b = temp;  

    printf("Inside swapByValue function:\n"); 
    printf("a = %d, b = %d\n", a, b);  
}

// Function to swap numbers using call-by-reference
void swapByReference (int *a, int *b) {
    int temp;  
    temp = *a;  
    *a = *b;  
    *b = temp;  

    printf ("Inside swapByReference function:\n"); 
    printf ("a = %d, b = %d\n", *a, *b);  // Display swapped values inside the function
}

int main () { 
    int x, y;  

    printf("Enter two numbers: "); 
    scanf("%d %d", &x, &y);

    // Call-by-value demonstration
    printf("\nBefore swapping (using call-by-value):\n"); 
    printf("x = %d, y = %d\n", x, y); 
    swapByValue(x, y);  
    printf("\nAfter swapping (using call-by-value):\n"); 
    printf("x = %d, y = %d\n", x, y);  

    // Call-by-reference demonstration
    printf("\nBefore swapping (using call-by-reference):\n"); 
    printf("x = %d, y = %d\n", x, y); 
    swapByReference(&x, &y); 
    printf("\nAfter swapping (using call-by-reference):\n"); 
    printf("x = %d, y = %d\n", x, y);  
    
    getch();
    return 0;
}

