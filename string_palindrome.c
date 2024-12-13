#include <stdio.h>
#include<conio.h>
#include <string.h>

// Function to check if a string is a palindrome
void ispalindrome(char str[]) 
{
    int i, length; 
    int flag = 0; 
    length = strlen(str); // Calculate the length of the string

    
    for (i = 0; i < length / 2; i++) 
    {
        if (str[i] != str[length - i - 1]) // Compare corresponding characters
        {
            flag = 1; // Set flag if mismatch is found
            break;
        }
    }

    if (flag == 1) 
    {
        printf("%s is not a palindrome \n", str);
    } 
    else 
    {
        printf("%s is a palindrome \n", str);
    }
}

int main() 
{
    char string[20]; 

    printf("Enter a string: \n");
    scanf("%s", string); 

    // Call the function to check for palindrome
    ispalindrome(string);

    getch();
    return 0;
}
