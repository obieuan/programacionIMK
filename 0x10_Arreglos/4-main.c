//Write a C program to find sum of all array elements.
#include <stdio.h>
#define MAX_SIZE 1000
int main(){
    int arr[MAX_SIZE]; //arreglo de 1000 espacios
    int N;
    int suma = 0;

    printf("Ingrese la cantidad de numeros\n");
    scanf("%d", &N);
   
    printf("Ingrese %d numeros: ",N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<N; i++)
    {
        suma = suma + arr[i];
    }
    
    printf("El acumulado es %d: ",suma);
}
