#include <stdio.h>
/**
 * C program to calculate total, average and percentage of five subjects
 */
int main()
{
    float eng, phy, chem, math, comp; 
    float total, average, percentage;

    /* Input marks of all five subjects */
    printf("Enter marks of five subjects: \n");
    scanf("%f%f%f%f%f", &eng, &phy, &chem, &math, &comp);

    /* Calculate total, average and percentage */
    total = eng + phy + chem + math + comp;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    /* Print all results */
    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Percentage = %.2f\n", percentage);

    return 0;
}
