#include "main.h"
#include <stdio.h>
/**
 * Calculadora
 * Return: 0 if succeed
 */
int main(void)
{
    int suma;
    int res;

    suma = add(12,10);
    res = resta(12,10);
    printf("El valor de la suma es: %d\nEl valor de la resta es: %d\n",suma,res);
    return 0;
}
