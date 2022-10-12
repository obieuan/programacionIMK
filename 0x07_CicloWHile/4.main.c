#include <stdio.h>


int main()
{
    long long n=0;
    int contador = 0;

        printf("Ingrese un numero:\n");
        scanf("%lld",&n);        
    do
    {
        printf("Numero: %lld\n",n);
        n = n/10;
        contador++;

    } while (n>0);
    printf("El numero tiene %d digitos\n",contador);

    return (0);
}
