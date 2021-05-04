/*
*Returns length of the hypotenuse of a right triangel 
*Modified by Michael Luccas 2021-05-04
 */


#include <math.h>

double hypotenuse(int a, int b)
{
    double c;

    c = sqrt(pow((double)a, 2) + pow((double)b, 2));
    return c;
}
