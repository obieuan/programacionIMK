#include <stdio.h>


int main()
{
    int filas, columnas;
    printf("Ingrese el numero de filas:\n");
    scanf("%d",&filas);
    printf("Ingrese el numero de columnas:\n");
    scanf("%d",&columnas);

    for(int i=0;i<filas;i++)
    {        
        for(int j=0;j<columnas;j++)
        {
            printf("*");
        }
        printf("\n");        
    }       
    return (0);
}
