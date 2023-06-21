#include <stdio.h>

int main()
{
    // Declare variables for the input number, sum, and average
    int num, sum = 0;
    float average;

    // Start a for loop to iterate 10 times
    // The loop variable "i" is initialized to 1 and goes up to 10
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter the number: "); // Prompting the user to enter a number
        scanf("%d", &num); // Reading an integer input from the user and storing it in 'num'
        sum = sum + num; // Updating the sum by adding the entered number to it
    }

    printf("Sum of 10 Natural No.: -- %d\n", sum); // Printing the sum of the 10 numbers

    average = sum / 10.0; // Calculating the average by dividing the sum by 10.0
    printf("Average of digits is: %f\n", average); // Printing the average

    return 0; // Indicating successful program execution
}
