#include <stdio.h>
#define MAX_SIZE 1000
//Write a C program to read and print elements of array.
int main(){

    int arr[MAX_SIZE]; //arreglo de 1000 espacios
    int N;

    printf("Ingrese la cantidad de numeros\n");
    scanf("%d", &N);
   
    printf("Ingrese %d de numeros: ",N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i< N; i++)
    {
        printf("Elemento arr[%d]: %d\n",i,arr[i]);
    }

}
