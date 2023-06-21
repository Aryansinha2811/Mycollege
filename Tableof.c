#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number you want multiplication of : "); // Prompting the user to enter a number
    scanf("%d", &num); // Reading an integer input from the user and storing it in 'num'

    printf("The Multiplication of %d is as follows:\n", num); // Printing a message indicating the multiplication table for the entered number

    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", num, i, num * i); // Printing each multiplication expression and its result
    }

    return 0; // Indicating successful program execution
}
