#include "main.h"
#include <stdio.h>
/**
 * Este programa divide dos números
 * Return: 0 if succeed
 */
int main(void)
{
    int resultado = 0;

    resultado = div(6,5);
    printf("El resultado de la division es: %d\n",resultado);
    resultado = div(0,5);
    printf("El resultado de la division es: %d\n",resultado);
    resultado = div(-5,5);
    printf("El resultado de la division es: %d\n",resultado);
    return 0;
}
