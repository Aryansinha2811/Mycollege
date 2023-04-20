#include <stdio.h>     //Prerocessor directive

int main() {      // starts execution 

    int x  = 15;       //Initalising variable x and y for data storage
    int y = 5;

    int sum = x + y;   //Calculating sum of the variables
    int subtraction = x - y; //Calculating subtraction of the variables
    int product = x * y;  //Calculating product of the variables
    int devide = x / y;   //Calculating division of the variables
    int remainder = x % y;  //Calculating remainder of the variables

    printf("Sum is:- %d \n", sum); //Printing the sum of variables
    printf("Subtraction is:- %d \n", subtraction);  //Printing the subtraction of variables
    printf("Product is:- %d \n", product);  //Printing the product of variables
    printf("Devision is:- %d \n", devide);   //Printing the devisin of variables
    printf("Remainder is:- %d \n", remainder);   //Printing the sum of variables
    return 0;     //Returning integer value after succesfull execution
}   //program ends here