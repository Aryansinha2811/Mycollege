#include<stdio.h>

int main( ) 
{
    int num , sum =0 ;
    // Declare variables for the input number and sum

    for (int i = 1; i <= 10; i++)  // Start a for loop to iterate 10 times
    // The loop variable "i" is initialized to 1 and goes up to 10
    {
        printf("Enter the number:"); // Prompt the user to enter a number
        scanf("%d", &num);  // Read the input number from the user and store it in the "num" variable
        sum = sum + num ;   // Add the input number to the sum variable
    }

    // Print the sum of the 10 natural numbers
    printf("Sum of 10 Natural No.:--%d\n", sum);
    
    return 0; // Return 0 to indicate successful execution of the program
}
 