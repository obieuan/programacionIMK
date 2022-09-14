#include <stdio.h>
#include "main.h"
/**
 * C program to find perimeter of rectangle
 */

int main()
{
    float length, width, result;
    /*
     * Input length and width of rectangle from user
     */
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);

    /* Calculate perimeter of rectangle */
    result = perimeter(length, width);

    /* Print perimeter of rectangle */
    printf("Perimeter of rectangle = %f units \n", result);

    return 0;
}
