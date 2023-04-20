#include <stdio.h>

int main() {

    int a, b; // declaring two integer variables a and b

    printf("Enter the value of a:- ");
    scanf("%d", &a); // taking input for c from user

    printf("Enter the value of b:- ");
    scanf("%d", &b); // taking input for d from user

    printf("Without swapping numbers:- 'a = %d' and 'b = %d' \n" , a, b); // printing the values of a and b before swapping

    a = a +b;  // adding values of a and b and storing the result in a variable
    b = a - b;  // subtracting the value of b from a and storing the result in d variable
    a = a - b;  // subtracting the value of new b from a and storing the result in a variable

    printf("After swapping numbers:- 'a = %d' and 'd = %d'" , a, b); // printing the values of c and d after swapping
    return 0;   // Return 0 after succesfull execution of the program
}