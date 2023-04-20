#include <stdio.h>

int main() {

    // Declare a variable to store the temperature in Celsius
    float degree_Celsius;

    // Prompt the user to input the temperature in Celsius
    printf("Enter the value in Celsius:- ");

    // Take the user input for temperature in Celsius and store it in the declared variable
    scanf("%f", &degree_Celsius);

    // Calculate the equivalent temperature in Fahrenheit
    float degree_Fahreheit = (degree_Celsius * 9 / 5) + 32;

    // Display the temperature in Fahrenheit
    printf("Temperature in degree Fahrenheit:- %f", degree_Fahreheit);

    // Return 0 to signify successful execution of program
    return 0;
}