#include <stdio.h>
/**
 * C program to find all angles of a triangle if two angles are given
 */
int main()
{
    int a, b, c;

    /* Input two angles of the triangle */
    printf("Enter two angles of triangle: ");
    scanf("%d%d", &a, &b);

    /* Compute third angle */
    c = 180 - (a + b);

    /* Print value of the third angle */
    printf("Third angle of the triangle = %d\n", c);

    return 0;
}
