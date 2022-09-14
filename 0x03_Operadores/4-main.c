#include <stdio.h>
#include "main.h"
/**
 * C program to convert centimeter into meter and kilometer
 */
int main()
{
    float cm, meter, km;

    /* Input length in centimeter from user */
    printf("Enter length in centimeter: ");
    scanf("%f", &cm);

    /* Convert centimeter into meter and kilometer */
    meter = CMtoM(cm);
    km    = CMtoKM(cm);

    printf("Length in Meter = %.2f m \n", meter);
    printf("Length in Kilometer = %.2f km\n", km);

    return 0;
}
