#include <stdio.h>      //Prerocessor statement for basic input output added

int main() {   // Main function execution starts here.

    int x, y;   //Variable a and b initialised

    printf("Enter the value of x:- ");   //Prompt message for entering the value of a
    scanf("%d", &x); // taking input for the value of a
    printf("Enter the value of y:- ");//Prompt message for entering the value of b
    scanf("%d", &y);   // taking input for the value of b

    int result = x+= y, result1 = x -= y, result2 = x*= y, result3 = x/= y, result4 = x%=y;    //Calculating results

    printf("Using '+=' %d \n", result);     // Printing results of +=
    printf("Using '-=' %d \n", result1);    // Printing results -=
    printf("Using '*=' %d \n", result2);    // Printing results *=
    printf("Using '/=' %d \n", result3);    // Printing results /=
    printf("Using '%=' %d \n", result4);    // Printing results %=
    return 0;  //Returning integer value after succesfull execution
}   //program ends here