#include <stdio.h>
#include "main.h"
/**
 * C program to calculate diameter, circumference and area of circle
 */
int main()
{
    float radius, diameter, circumference, area;
    
    /*
     * Input radius of circle from user
     */
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    /*
     * Calculate diameter, circumference and area
     */
    diameter = diameterC(radius);
    circumference = circumferenceC(radius);
    area = areaC(radius);

    /*
     * Print all results
     */
    printf("Diameter of circle = %.2f units \n", diameter);
    printf("Circumference of circle = %.2f units \n", circumference);
    printf("Area of circle = %.2f sq. units \n", area);

    return 0;
}
