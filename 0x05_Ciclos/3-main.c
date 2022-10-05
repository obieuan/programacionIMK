#include <stdio.h>
#include "main.h"


int main(void)
{
    int n1=0;
    char retorno;
    printf("Ingrese un numero: \n");
    scanf("%d",&n1);

    retorno = cubo(n1);
     
    printf("La funcion me retorno: %c\n", retorno);
    return(0);
}

