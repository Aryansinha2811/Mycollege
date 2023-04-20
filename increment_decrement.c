#include <stdio.h> // includes the standard input/output library

int main() // main function starts
{
    int p = 10, q = 100; // declares and initializes integer variables a and b
    float r = 10.5, s = 100.5; // declares and initializes float variables c and d

    printf("++p = %d \n", ++p); // increments a and prints the value
    printf("p++ = %d \n", p++); // prints the value of a and then increments it

    printf("--q = %d \n", --q); // decrements b and prints the value
    printf("q-- = %d \n", q--); // prints the value of b and then decrements it

    printf("++r = %f \n", ++r); // increments c and prints the value
    printf("r++ = %f \n", r++); // prints the value of c and then increments it

    printf("--s = %f \n", --s); // decrements d and prints the value
    printf("s-- = %f \n", s--); // prints the value of d and then decrements it

    return 0; // indicates successful completion of program
}