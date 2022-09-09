#include "main.h"
#include <stdio.h>
/**
 * Este programa calcula el
 * módulo de un número
 * Return: 0 if succeed
 */
int main(void)
{
    int resultado = 0;

    resultado = mod(15,1);
    printf("El módulo es: %d\n",resultado);
    resultado = mod(0,25);
    printf("El módulo es: %d\n",resultado);
    resultado = mod(-10,-7);
    printf("El módulo es: %d\n",resultado);
    return 0;
}
