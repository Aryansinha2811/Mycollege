#include <stdio.h>  //preprocessor directive 

int main() {   //starts the execution

    //variable declarations
    int a;
    float b;
    char c;
    double d;
    long L;


    //Asking user to enter an integer value and read input using scanf
    printf("Enter Integer value:- ");
    scanf("%d", &a);
    //print the input value as integer
    printf("'%d', is the Integer value given by you \n", a);

    //Asking user to enter a float value and read input using scanf
    printf("Enter Float value:- ");
    scanf("%f", &b);
    //print the input value as float
    printf("'%f', it is the float value given by you \n", b);

    //Asking user to enter a char value and read input using scanf
    printf("Enter character value:- ");
    scanf("%c", &c);
    //print the input value as char
    printf("'%c', it is the char value given by you \n", c);

    //Asking user to enter a double value and read input using scanf
    printf("Enter Double value:- ");
    scanf("%lf", &d);
    //print the input value as double
    printf("'%lf', it is the double value given by you \n", d);

    //Asking user to enter a long value and read input using scanf
    printf("Enter Long value:- ");
    scanf(" %ld", &L);
    //print the input value as character
    printf("'%ld' it is the long value given by you", L);

    return 0; //return 0 to the operating system
}