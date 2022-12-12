#include <stdio.h>
#include "main.h"
/* Este programa despliega todos los numeros 
** que sean primos del 0 a n
*/

int main(void)
{
    int numero;
    printf("Ingrese un numero\n");
    scanf("%d",&numero);
    primos(numero);    
    return(0);
}

