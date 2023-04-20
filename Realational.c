#include <stdio.h>
int main()
{
    int x = 5, y = 5, z = 10;   // Declare and initialize variables

    // Use relational operator == (equal to) to compare x and y
    printf("%d == %d is %d \n", x, y, x == y);

    // Use relational operator == (equal to) to compare x and z
    printf("%d == %d is %d \n", x, z, x == z);

    // Use relational operator > (greater than) to compare x and y
    printf("%d > %d is %d \n", x, y, x ) ;

    // Use relational operator > (greater than) to compare x and z
    printf("%d > %d is %d \n", x, z, x > z);

    // Use relational operator < (less than) to compare x and y
    printf("%d < %d is %d \n", x, y , x < y);

    // Use relational operator < (less than) to compare x and z
    printf("%d < %d is %d \n", x, z, x < z);

    // Use relational operator != (not equal to) to compare x and y
    printf("%d != %d is %d \n", x, y, x != y);

    // Use relational operator != (not equal to) to compare axand z
    printf("%d != %d is %d \n", x, z, x != z);

    // Use relational operator >= (greater than or equal to) to compare a and y
    printf("%d >= %d is %d \n", x, y, x >= y);

    // Use relational operator >= (greater than or equal to) to compare a and z
    printf("%d >= %d is %d \n", x, z, x >= z);

    // Use relational operator <= (less than or equal to) to compare a and y
    printf("%d <= %d is %d \n", x, y, x <= y);

    // Use relational operator <= (less than or equal to) to compare a and z
    printf("%d <= %d is %d \n", x, z, x <= z);

    return 0;
}