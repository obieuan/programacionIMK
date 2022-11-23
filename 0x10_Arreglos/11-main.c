#include <stdio.h>

int main()
{
    // int numeros[x] <- arreglo de una sola dimension
    int numeros[3][3]; // <- arreglo bidimensional


    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            printf("Ingrese un numero\n");
            scanf("%d", &numeros[j][i]);
        }        
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            printf("%d ",numeros[i][j]);
        }
        printf("\n");
    }


}
