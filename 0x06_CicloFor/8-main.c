#include <stdio.h>
#include "main.h"

int main(void)
{
    int base, exponente,resultado;
    printf("Ingrese la base");
    scanf("%d",base);
    printf("Ingrese el exponente");
    scanf("%d",exponente);

    resultado = potencia(base,exponente);
    printf("%d elevado a la potencia %d es: %d", base, exponente, resultado);
    return(0);
}
