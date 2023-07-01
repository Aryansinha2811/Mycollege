#include<stdio.h>

int main() {
    int num1 = 0, num2 = 1, nextdigit = 0;  // Initialize variables 'num1', 'num2', and 'nextdigit' for the Fibonacci series
    int n;  // Declare an integer variable 'n' to store the number of terms
    
    printf("Enter the number of terms: ");  // Prompt the user to enter the number of terms
    scanf("%d", &n);  // Read and store the entered number of terms in the variable 'n'
    
    printf("Fibonacci series: ");  // Print the label for the Fibonacci series
    
    do {
        printf("%d", num1);  // Print the current number in the Fibonacci series
        
        nextdigit = num1 + num2;  // Calculate the next digit in the series by adding the previous two digits
        num1 = num2;  // Assign the value of 'num2' to 'num1' for the next iteration
        num2 = nextdigit;  // Assign the value of 'nextdigit' to 'num2' for the next iteration
        
        n--;  // Decrement the number of terms remaining to be printed
    } while (n > 0);  // Repeat the loop as long as there are terms remaining to be printed
    
    return 0;  // Return 0 to indicate successful execution of the program
}