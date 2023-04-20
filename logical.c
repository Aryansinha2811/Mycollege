#include <stdio.h>
int main()
{
    int x = 5, y = 5, z = 10, result;
    // performing logical AND operation
    result = (x == y) && (z > y);
    printf("(x == y) && (z > y) is %d \n", result);
    // performing logical AND operation
    result = (x == y) && (z < y);
    printf("(x == y) && (z < y) is %d \n", result);

    // performing logical OR operation
    result = (x == y) || (z < y);
    printf("(x == y) || (z < y) is %d \n", result);

    // performing logical NOT operation
    result = !(x != y);
    printf("!(x != y) is %d \n", result);

    // performing logical NOT operation
    result = !(x == y);
    printf("!(x == y) is %d \n", result);

    // returning integer value
    return 0;
}